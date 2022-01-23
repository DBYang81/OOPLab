//
// Created by DBY on 8.12.2021.
//

#include "CounterUser.h"


using namespace std;

CounterUser ::CounterUser(int limit): ofc(0, limit) {
     ofc.SetObserver(this);
}

void CounterUser::IncrementBy(int num) {
    int i = 0;
    while(i < num){
        ofc.inc();
        ++i;
    }
}

void CounterUser::HandleLimitReached() {
    cout << "Limit has been reached" <<endl;
}

