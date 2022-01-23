//
// Created by DBY on 17.12.2021.
//

#ifndef PROJ11B_OBSERVER_H
#define PROJ11B_OBSERVER_H
#include "CounterObserver.h"

class Observer: public CounterObserver {
public:
        Observer();
        virtual ~Observer(){}
        virtual void HandleLimitReached(Counter* ) override;
};

#endif //PROJ11B_OBSERVER_H
