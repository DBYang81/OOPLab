#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <thread>
#include <atomic>
#include <chrono>
using namespace std::chrono_literals;

class Dealer;
class Car {
	friend std::ostream &operator<<(std::ostream &out, const Car &car);
public:
	using SharedPtr = std::shared_ptr<Car>;

	Car(const char* m="Ford", const char *l=nullptr, int ml=0) 
		: model(m),
		license(l?l:(rand()%2?"FOO-":"BAR-") + std::to_string(rand()%999+1)), 
		mileage(ml?ml:rand()%10000) {

		}
		
	~Car() { std::cout << model << " " << license << " deleted" << std::endl; };
	void Read();
	std::string GetLicense() const { return license; }
	void SetDealer(std::shared_ptr<Dealer> d) {
		dealer = d;
	}
private:
	std::string model;
	std::string license;
	int mileage;

	std::weak_ptr<Dealer> dealer;
};


/* ---------------------- */

class Website {
public:
	using SharedPtr = std::shared_ptr<Website>;

	Website(const char *n = nullptr) : name(n ? n : "www.cars" + std::to_string(rand() % 99 + 1) + ".com") {}
	~Website() { std::cout << name << " deleted" << std::endl; };
	void advertise(Car::SharedPtr car) { listing.push_back(car); }
	void print(std::ostream &out = std::cout) {
		out << name << std::endl;
		
		// remove all car sold
		listing.remove_if([](const std::weak_ptr<Car>& c){
			// return c.use_count() == 0;
			if(c.use_count() == 0){
				return true;
			}
			return false;
		});

		for(auto car : listing) {
			if(Car::SharedPtr ptr = car.lock()){
				out << *ptr << std::endl;
			}
		}
		out << name << " end of list" << std::endl;
	}

	void run() {
		print_thread = std::thread([this](){
			this->isrunning = true;
			do {
				for(auto i = 0; i < 10; i++){ // sleep 10s
					if(isrunning == false || this->listing.size() == 0){
						break;
					}
					std::this_thread::sleep_for(1s);
				}
				this->print();

			} while (isrunning == true && this->listing.size());

			std::cout<< name << " exiting loop"<<std::endl;
		});
	}

	void stop() {
		if(isrunning){
			isrunning = false;
			std::cout<< name << " wating for exiting loop"<<std::endl;
			print_thread.join();
		}
	}
private:
	std::list<std::weak_ptr<Car>> listing; // using std::list instead of std::vector, since there are an issue with remove std::weak_ptr element
	std::string name;

	std::atomic_bool isrunning{false};
	std::thread print_thread;
};

class Dealer : public std::enable_shared_from_this<Dealer> {
	friend std::ostream &operator<<(std::ostream &out, const Dealer &dealer);
public:
	using SharedPtr = std::shared_ptr<Dealer>;

	Dealer(const char *name_ = "John Doe") : name(name_) {};
	~Dealer() { std::cout << name << " deleted" << std::endl; };
	void buy();
	void sell();
	void add(Car::SharedPtr car) {
		car->SetDealer(shared_from_this());
		cars.push_back(car);
		for (auto site : sites)
			site->advertise(car); 
		}
	void add_site(Website::SharedPtr w) { sites.push_back(w); }

	const std::string GetName() { return name; }
private:
	std::string name;
	std::vector<Car::SharedPtr> cars;
	std::vector<Website::SharedPtr> sites;
};


void car_sales()
{
	std::cout << "Car sales started" << std::endl;
	std::vector<Dealer::SharedPtr> dealerList;

	Website::SharedPtr wa = std::make_shared<Website>("www.autos.com");
	Website::SharedPtr wb = std::make_shared<Website>("www.bilar.com");
	Website::SharedPtr wc = std::make_shared<Website>("www.cars.com");

	Dealer::SharedPtr a = std::make_shared<Dealer>("Alan Aldis");
	Dealer::SharedPtr b = std::make_shared<Dealer>("Bill Munny");

	dealerList.push_back(a);
	dealerList.push_back(b);

	{
		Dealer::SharedPtr c = std::make_shared<Dealer>("Casey Ball");
		dealerList.push_back(c);

		Car::SharedPtr ca = std::make_shared<Car>();
		Car::SharedPtr cb = std::make_shared<Car>();

		a->add_site(wa);
		a->add_site(wb);
		b->add_site(wb);
		b->add_site(wc);
		c->add_site(wa);
		c->add_site(wb);
		c->add_site(wc);

		a->buy();
		a->buy();
		a->buy();
		a->buy();

		b->buy();
		b->buy();
		b->buy();

		c->buy();
		c->buy();
		c->add(ca);
		c->add(cb);
	}

	// start website print loop
	wa->run();
	wb->run();
	wc->run();

	// ask user to process
	do {
		std::cout<<"List of dealer: "<<std::endl;
		for(auto dealer : dealerList){
			std::cout<< dealer->GetName()<<std::endl;
		}
		std::cout <<">>Input name of dealer to buy, or exit program if dealer's name is empty"<<std::endl <<": ";
		std::string input;
		std::getline(std::cin, input);
		if(input.empty()){
			std::cout<<"Empty name, exting!!"<<std::endl;
			break;
		}

		for(auto dealer : dealerList){
			if(dealer->GetName() == input){
				dealer->sell();
			}
		}

	} while(1);

	// wait for stop
	wa->stop();
	wb->stop();
	wc->stop();

	std::cout << "Car sales ended" << std::endl;

}

int main(int argc, char **argv) {
	_CrtMemState s1;
	_CrtMemCheckpoint(&s1);

	srand(time(NULL));

	car_sales();

	_CrtMemState s2,s3;
	_CrtMemCheckpoint(&s2);
	if (_CrtMemDifference(&s3, &s1, &s2)) {
		_CrtDumpMemoryLeaks();
		_CrtMemDumpStatistics(&s3);
	}

	return 0;
}

//=====================================

void Car::Read()
{
	//std::cout << "Enter car information" << std::endl;
	// replace the following with your own code
	model = "Seat";
	license = (rand() % 2 ? "ZAP-" : "ZIP-") + std::to_string(rand() % 999 + 1);
	mileage = 10000 + rand() % 10000;
}

std::ostream & operator<<(std::ostream & out, const Car & car)
{
	std::cout << "+Model: " << car.model << std::endl << "+License: " << car.license << std::endl << "+Mileage: " << car.mileage << std::endl;
	if(std::shared_ptr<Dealer> ptr = car.dealer.lock()) {
		std::cout << "+Dealer: " << ptr->GetName() << std::endl;
	}

	return out;
}

//====================================


void Dealer::buy()
{
	Car::SharedPtr car = std::make_shared<Car>();
	car->Read();
	add(car);
}

void Dealer::sell()
{
	std::cout << *this; // print my list of cars
	std::cout << "Enter license of car you want to buy" << std::endl << ": ";

	std::string license;
	std::getline(std::cin, license);
	auto ci = std::find_if(cars.begin(), cars.end(), [&license](Car::SharedPtr c) {return license == c->GetLicense(); });
	if (ci != cars.end()) {
		cars.erase(ci);
	}
}


std::ostream & operator<<(std::ostream & out, const Dealer & dealer)
{
	std::cout << dealer.name << "'s cars for sale" << std::endl;
	for (auto car : dealer.cars) {
		std::cout << *car <<std::endl;
	}
	std::cout << "End of " << dealer.name << "'s cars listing" << std::endl;

	return out;
}
