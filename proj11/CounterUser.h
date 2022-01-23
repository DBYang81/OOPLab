//
// Created by DBY on 8.12.2021.
//
#pragma once
#ifndef PROJ11_COUNTERUSER_H
#define PROJ11_COUNTERUSER_H
#include "OverflowCounter.h"
#include "Observer.h"
#include <iostream>

class CounterUser : public Observer{
public:
    CounterUser(int limit = 0);
    virtual ~CounterUser(){}
    void IncrementBy(int num);
    void HandleLimitReached() override;

private:
    OverflowCounter ofc;
};


#endif //PROJ11_COUNTERUSER_H
