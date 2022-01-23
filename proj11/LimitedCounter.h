//
// Created by DBY on 6.12.2021.
//
#include "Counter.h"
#ifndef PROJ10_LIMITEDCOUNTER_H
#define PROJ10_LIMITEDCOUNTER_H


class LimitedCounter : public Counter{
public:
    LimitedCounter(int x = 0, int y = 0);
    virtual ~LimitedCounter() {};
    void inc();
    void dec();
    virtual operator int();
private:
    int initial;
    int limit;

};


#endif //PROJ10_LIMITEDCOUNTER_H

