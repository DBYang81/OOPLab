//
// Created by DBY on 6.12.2021.
//

#include "LimitedCounter.h"
using namespace std;

LimitedCounter::LimitedCounter(int _x, int _y): initial(_x), limit(_y){}

void LimitedCounter::inc() {
    if(initial < limit) {
        initial++;
    }
}

void LimitedCounter::dec() {
    if(initial > 0){
        --initial;
    }
}

LimitedCounter::operator int() {
    return this-> initial;
}
