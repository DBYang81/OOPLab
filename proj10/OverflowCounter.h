//
// Created by DBY on 6.12.2021.
//
#include "Counter.h"
#ifndef PROJ10_OVERFLOWCOUNTER_H
#define PROJ10_OVERFLOWCOUNTER_H


class OverflowCounter : public Counter {
public:
    OverflowCounter(int x = 0, int y = 0);
    virtual ~OverflowCounter() {};
    void inc();
    void dec();
    operator int();
private:
    int initial;
    int limit;
};


#endif //PROJ10_OVERFLOWCOUNTER_H
