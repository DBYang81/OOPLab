#include "Counter.h"
#include "LimitedCounter.h"
#include "OverflowCounter.h"

using namespace std;
void UseCounter(Counter& ctr, int num);

int main(int argc, char** argv) {
	LimitedCounter lc(0, 5);
	OverflowCounter oc(5, 9);

	cout <<"current counter value: "<< oc << endl;
	UseCounter(oc, 5);
	cout <<"current counter value: "<< oc << endl; // should display zero
	UseCounter(oc, -1);
	cout <<"current counter value: "<< oc << endl; // should display 9
	oc.dec();
	cout <<"current counter value: "<< oc << endl; // should display 8

    cout <<"current counter value: "<< lc << endl;
	lc.inc();
	cout <<"current counter value: "<< lc << endl;
	lc.dec();
	cout <<"current counter value: "<< lc << endl;
	for(int i = 0; i < 10; ++i) lc.inc();
	cout <<"current counter value: "<< lc << endl;
	UseCounter(lc, -9);
	cout <<"current counter value: "<< lc << endl;

	return 0;
}

void UseCounter(Counter& ctr, int num) {
    if (num >= 0) {
        for (int i = 0; i < num; i++) {
            ctr.inc();
        }
    } else {
        for (int i = 0; i > num; i--) {
            ctr.dec();
        }
    }
}