//
// Created by DBY on 16.12.2021.
//

#ifndef PROJ11B_LIMITEDCOUNTER_H
#define PROJ11B_LIMITEDCOUNTER_H

#include "Counter.h"
#include <vector>
using namespace std;

class LimitedCounter : public Counter{
public:
    LimitedCounter(int initial = 0, int limit = 0);
    virtual ~LimitedCounter() {};
    void inc();
    void dec();
    virtual operator int();
    void SetObserver(CounterObserver*);
private:
    vector<CounterObserver*> lcObservers;
    void Notify();
    int initial;
    int limit;

};


#endif //PROJ11B_LIMITEDCOUNTER_H
