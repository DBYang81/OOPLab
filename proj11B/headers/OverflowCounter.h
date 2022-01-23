//
// Created by DBY on 16.12.2021.
//

#ifndef PROJ11B_OVERFLOWCOUNTER_H
#define PROJ11B_OVERFLOWCOUNTER_H

#include "Counter.h"
#include <vector>

using namespace std;

class OverflowCounter : public Counter {
public:
    OverflowCounter(int initial = 0, int limit = 0);
    virtual ~OverflowCounter() {};
    void inc();
    void dec();
    operator int();
    void SetObserver(CounterObserver* ) override;
private:
    vector<CounterObserver*> ctrObservers;
    void Notify();
    int initial;
    int limit;

};


#endif //PROJ11B_OVERFLOWCOUNTER_H
