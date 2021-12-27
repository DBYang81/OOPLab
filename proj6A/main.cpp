#include <iostream>
#include "Time.h"
using namespace std;

int main() {
    Time time1, time2, duration;

    time1.read("Enter time 1 (hh:mm)");
    time1.validate();
    time2.read("Enter time 2 (hh:mm)");
    time2.validate();

    if (time2>time1) {
        duration = time2 - time1;
        cout << "Starting time was " << time1 << endl;
    } else if(time1 == time2){
        cout << "Same time!" << endl;
        return 0;
    }else{
        duration = time1 - time2;
        cout << "Starting time was " << time2 << endl;
    }
    cout << "Duration was " << duration << endl;
    return 0;
}
