//
// Created by DBY on 6.12.2021.
//

#include "OverflowCounter.h"

using namespace std;

OverflowCounter::OverflowCounter(int _x, int _y):initial(_x <= _y? _x:_y), limit(_y){}

void OverflowCounter::inc() {
    if(initial < limit){
        ++initial;
    }else{
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