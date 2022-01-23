//
// Created by DBY on 16.12.2021.
//

#include "headers/OverflowCounter.h"

using namespace std;

OverflowCounter::OverflowCounter(int initial, int limit):initial(initial), limit(limit){}

void OverflowCounter::inc() {
    if(initial < limit){
        ++initial;
    }else{
        initial = 0;
        Notify();
    }
}

void OverflowCounter::dec() {
    if(initial > 0){
        --initial;
    }else{
        initial = limit;
        Notify();

    }
}

OverflowCounter::operator int() {
    return initial;
}

void OverflowCounter::SetObserver(CounterObserver *ptr) {
    ctrObservers.push_back(ptr);

}

void OverflowCounter::Notify() {
    for(auto elem:ctrObservers){
        elem ->HandleLimitReached(this);
    }
}
