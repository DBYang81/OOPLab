#include <iostream>
#include <vector>
#include "Time.h"

using namespace std;

void print(const vector<Time> &v)
{
	for(auto &t : v) {
		cout << t << endl;
	}
}


int main() {
	Time time1, time2, duration;
	time1.read("Enter time 1 (hh:mm)");
    time1.validate();
	time2.read("Enter time 2 (hh:mm)");
    time2.validate();
	if (time1<time2) {
		duration = time2 - time1;
		cout << "Starting time was " << time1 << endl;
	} else {
		duration = time1 - time2;
		cout << "Starting time was " << time2 << endl;
	}
	cout << "Duration was " << duration << endl;

	vector<Time> tv(5);
	for(auto &t : tv) {
		t.read("Enter time(hh:mm):");
        t.validate();
	}

	cout << "Times: " << endl;
	print(tv);
	
	Time sum;
	for(auto t : tv) {
		sum = sum + t;
	}
	
	cout << "Sum of times: " << sum << endl;
	
	cout << "Post-increment: " << endl;
	//print(tv);
	for(auto &t : tv) {
		cout << t++ << endl;
	}

    cout << endl;
	print(tv);

	cout << "Pre-increment: " << endl;
	for(auto &t : tv) {
		cout << ++t << endl;
	}

	sort(tv.begin(), tv.end());

	cout << "Sorted times: " << endl;
	print(tv);

	return 0;
}

