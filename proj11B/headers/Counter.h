//
// Created by DBY on 16.12.2021.
//

#ifndef PROJ11B_COUNTER_H
#define PROJ11B_COUNTER_H
#include "CounterObserver.h"

class CounterObserver; //forward declaration in both class
class Counter {
public:
    virtual ~Counter() {};
    virtual void inc() = 0;
    virtual void dec() = 0;
    virtual operator int() = 0;
    virtual void SetObserver(CounterObserver* ) = 0;
private:

};



#endif //PROJ11B_COUNTER_H
