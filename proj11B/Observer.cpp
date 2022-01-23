//
// Created by DBY on 17.12.2021.
//

#include "headers/Observer.h"
#include <iostream>

using namespace std;
Observer::Observer() {}

void Observer::HandleLimitReached(Counter* tmp) {
    cout<< "The limit has been reached. Current Counter value is: ";
    cout<< *tmp <<endl;
}