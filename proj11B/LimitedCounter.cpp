//
// Created by DBY on 16.12.2021.
//

#include "headers/LimitedCounter.h"

using namespace std;

LimitedCounter::LimitedCounter(int initial, int limit): initial(initial), limit(limit){}

void LimitedCounter::inc() {
    if(initial < limit) {
        initial++;
        if(initial == limit) Notify();
    }else{
        Notify();
    }
}

void LimitedCounter::dec() {
    if(initial > 0){
        --initial;
        if(initial == 0) Notify();
    }else{
        Notify();
    }
}

LimitedCounter::operator int() {
    return initial;
}

void LimitedCounter::SetObserver(CounterObserver *pt) {
    lcObservers.push_back(pt);
}

void LimitedCounter::Notify() {
    for(auto elem: lcObservers){
        elem ->HandleLimitReached(this);
    }
}

