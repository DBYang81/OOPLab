//
// Created by DBY on 8.12.2021.
//
#include "CounterUser.h"
#include "OverflowCounter.h"

using namespace std;

OverflowCounter::OverflowCounter(int _x, int _y):initial(_x), limit(_y){

}

void OverflowCounter::inc() {
    if(initial < limit){
        ++initial;
    }else{
        Notify();
        initial = 0;
    }
}

void OverflowCounter::dec() {
    if(initial > 0){
        --initial;
    }else{
        initial = limit;
    }
}

OverflowCounter::operator int() {
    return initial;
}

void OverflowCounter::SetObserver(Observer *ptr) {
    obs = ptr ;
}
void OverflowCounter::Notify() {
    obs ->HandleLimitReached();
}

