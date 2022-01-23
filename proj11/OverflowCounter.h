//
// Created by DBY on 6.12.2021.
//

#ifndef PROJ10_OVERFLOWCOUNTER_H
#define PROJ10_OVERFLOWCOUNTER_H
#include "Counter.h"
#include "Observer.h"
#include "CounterUser.h"

class OverflowCounter : public Counter {
public:
    OverflowCounter(int x = 0, int y = 0);
    virtual ~OverflowCounter() {};
    void inc();
    void dec();
    operator int();
    void SetObserver(Observer *);
private:
    Observer* obs;
    void Notify();
    int initial;
    int limit;

};


#endif //PROJ10_OVERFLOWCOUNTER_H

