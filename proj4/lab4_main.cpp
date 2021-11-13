#include <iostream>
#include "Time.h"
using namespace std;

int main() {
	Time time1, time2, duration;

        time1.read("Enter time 1 (hh:mm)");
        time1.validate();
        time2.read("Enter time 2 (hh:mm)");
        time2.validate();

    if (time1.lessThan(time2)) {
        duration = time2.subtract(time1);
        cout << "Starting time was " ;
        time1.display();
        cout << endl;
    } else {
        duration = time1.subtract(time2);
        cout << "Starting time was " ;
        time2.display();
        cout << endl;
    }
        cout << "Duration was ";
        duration.display();

	return 0;
}
