//
// Created by DBY on 27.11.2021.
//

#include "Person.h"

Person::Person(const char *name): name(name){}

void Person::identity() const {
    cout << "My name is:" << name << endl;
}

void Person::interrogate() {}

