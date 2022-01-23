//
// Created by DBY on 16.12.2021.
//

#ifndef PROJ11B_COUNTEROBSERVER_H
#define PROJ11B_COUNTEROBSERVER_H
#include "Counter.h"

class Counter;//forward declaration in both class is safer
class CounterObserver{
public:
    virtual void HandleLimitReached(Counter* ctr) = 0;
};
#endif //PROJ11B_COUNTEROBSERVER_H
