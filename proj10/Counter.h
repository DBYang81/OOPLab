//
// Created by DBY on 6.12.2021.
//
# pragma once
#ifndef PROJ10_COUNTER_H
#define PROJ10_COUNTER_H
#include <iostream>

class Counter {
public:
    Counter(){}
    virtual ~Counter() {}
    virtual void inc() = 0;
    virtual void dec() = 0;
    virtual operator int() = 0;
private:

};

#endif //PROJ10_COUNTER_H
