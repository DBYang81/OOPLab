//
// Created by Yang on 1/3/22.
//

#include "Phonebook.h"

Phonebook::Phonebook() : index(0), contact(){}

std::ostream& operator<< (std::ostream& out, Person& p){
    out << p.getFullName() <<','<< p.getEmail() << ','<< p.getPhone()<< ',' << p.getCity() <<',';
    for(auto& elem: p.getRelatives()) {
        out << elem << ",";
    }
    out << std::endl;
    return out;
}

std::istream& operator>> (std::istream& in, Person& p){
    std::string str, substr;
    std::getline(in, str);
    std::istringstream iss(str);
    std::getline(iss, substr, ','); p.accessName(substr);
    getline(iss, substr, ','); p.accessEmail(substr);
    getline(iss, substr, ','); p.accessPhone(substr);
    getline(iss, substr, ','); p.accessCity(substr);
    while(getline(iss, substr, ',')){
        if (!substr.empty()) {
            p.accessRelative(substr);
        }
    }
    return in;
}

void Phonebook::menu() {
    int opt;
    while(true){
        std::cout << std::endl;
        std::cout <<"\t" << "Phone Book Menu" << "\t" << std::endl;
        std::cout << "------------------------------------------" << std::endl;
        std::cout << " 1. Initialize all Records (clear all)\n";
        std::cout << " 2. Add New Person Record\n";
        std::cout << " 3. Save the Record\n";
        std::cout << " 4. Display saved Records\n";
        std::cout << " 5. Search by City\n";
        std::cout << " 6. Delete the Record\n";
        std::cout << " 7. Exit\n";
        std::cout << std::endl;
        std::cout << "Enter your option: ";
        std::cin >> opt;
        std::cin.ignore();
        switch(opt) {
            case 1:
                initialize();
                break;
            case 2:
                addUser();
                break;
            case 3:
                saveToFile();
                break;
            case 4:
                read();
                break;
            case 5:
                searchByCity();
                break;
            case 6:
                deletion();
                saveToFile();
                break;
            case 7:
                saveToFile();
                std::cout <<"Program Exits Now!" << std::endl;
                exit(0);
            default:
                std::cout << "Invalid Input!" << std::endl;
        }
    }
}

void Phonebook::addUser() {
    Person person;
    person.setName(); person.setEmail(); person.setPhone(); person.setCity(); person.setRelatives();
    contact.push_back(person);
    std::cout << std::endl;
    std::cout << "#User Data: " << "< " << person.getFullName() << " >" <<" has been added to list." << std::endl;
    std::cout << "#Please remember to save current Data!!" << std::endl;
}

void Phonebook::saveToFile() {
    std::ofstream fileout("../phonebook.txt", std::ios::in | std::ios::app);
    if(fileout.is_open()){
        std::vector<Person>::iterator it;
        for(it = contact.begin(); it < contact.end(); ++it){
            fileout << *it;
        }
    }else{
        std::cerr << "Invalid File!" << std::endl;
    }
    contact.clear();
    fileout.close();
}

void Phonebook::read() {
    contact.clear();
    std::ifstream filein("../phonebook.txt", std::ios::out);
    Person person;
    std::cout << std::setiosflags(std::ios::left);
    std::cout << std::setw(10) << "#No." <<std::setw(20) << "Name:" <<std::setw(30) << "Email:" <<std::setw(20) << "Phone No.";
    std::cout << std::setw(20) << "City in" << std::setw(20) << "Relatives:" << std::endl;
    std::cout << "---------------------------------------------------------------------------------------------------------------------------"<< std::endl;
    if(filein.is_open()){
        while(filein >> person){
            contact.push_back(person);
            person.vectorClean();
        }
    }else{
        std::cerr <<"Invalid File!" << std::endl;
    }
    std::vector<Person>::iterator it;
    for(it = contact.begin(); it < contact.end(); ++it){
        Person p = *it;
        std::cout << std::setiosflags(std::ios::left);
        std::cout << std::setw(10) << ++index << std::setw(20) << p.getFullName() << std::setw(30) << p.getEmail();
        std::cout << std::setw(20) << p.getPhone() << std::setw(20) << p.getCity();
        for(auto& elem: p.getRelatives()) {
            std::cout << elem << ",";
        }
        std::cout << std::endl;
    }
    index = 0;
    contact.clear();
    filein.close();
}

void Phonebook::extractData() {
    contact.clear();
    std::ifstream fExtract("../phonebook.txt", std::ios::out);
    Person pData;
    if(fExtract.is_open()){
        while(fExtract >> pData){
            contact.push_back(pData);
            pData.vectorClean();
        }
    }else{
        std::cerr <<"Invalid File!" << std::endl;
    }
    fExtract.close();
}

void Phonebook::deletion() {
    std::string stringDelete, ans;
    std::cout << "Enter the full name: ";
    std::getline(std::cin, stringDelete);
    extractData();
    std::cout << std::setiosflags(std::ios::left);
    std::cout << std::setw(20) << "Name:" <<std::setw(30) << "Email:" <<std::setw(20) << "Phone No.";
    std::cout << std::setw(20) << "City in" << std::setw(20) << "Relatives:" << std::endl;
    std::cout << "---------------------------------------------------------------------------------------------------------------------------"<< std::endl;
    std::vector<Person>::iterator it;
    for(it = contact.begin(); it < contact.end(); ++it){
        Person pt = *it;
        if(pt.getFullName() == stringDelete){
            std::cout << std::setw(20) << pt.getFullName() <<std::setw(30) << pt.getEmail() <<std::setw(20) << pt.getPhone();
            std::cout << std::setw(20) << pt.getCity();
            for(auto& elem: pt.getRelatives()) {
                std::cout << elem << ",";
            }
            std::cout << std::endl;
            std::cout <<"#Are you sure you want to delete?[y/n]";
            std::cin >> ans;
            if(ans == "y" || ans == "yes") {
                contact.erase(it);
                ans = "";
                --it;
            }
        }
    }
    remove("../phonebook.txt");
}

void Phonebook::searchByCity() {
    std::string findCity;
    std::cout << "Enter a City: ";
    std::getline(std::cin, findCity);
    extractData();
    std::cout << std::setiosflags(std::ios::left);
    std::cout << std::setw(20) << "Name:" <<std::setw(30) << "Email:" <<std::setw(20) << "Phone No.";
    std::cout << std::setw(20) << "City in" << std::setw(20) << "Relatives:" << std::endl;
    std::cout << "---------------------------------------------------------------------------------------------------------------------------"<< std::endl;
    std::vector<Person>::iterator it;
    for(it = contact.begin(); it < contact.end(); ++it) {
        Person pt = *it;
        if (pt.getCity() == findCity) {
            std::cout << std::setw(20) << pt.getFullName() << std::setw(30) << pt.getEmail();
            std::cout << std::setw(20)<< pt.getPhone();
            std::cout << std::setw(20) << pt.getCity();
            for (auto &elem: pt.getRelatives()) {
                std::cout << elem << ",";
            }
            std::cout << std::endl;
        }
    }
    contact.clear();
}

void Phonebook::initialize() {
    index = 0;
    contact.clear();
    remove("../phonebook.txt");
    std::ofstream file("../phonebook.txt", std::ios::out | std::ios::trunc);
    if(!(file.is_open())){
        std::cerr << "Not Able to Initialize a File!" <<std::endl;
    }
    file.close();
}