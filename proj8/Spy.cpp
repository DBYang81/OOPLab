//
// Created by DBY on 27.11.2021.
//

#include "Spy.h"

#include <utility>
#include "Person.h"

Spy::Spy(string _name, string _alias, int _res): name(_name), alis(_alias), res(_res){}

void Spy::identity() const {
    if(res > 0){
        cout << "My name is: " << alis << endl;
    }else if(res < 1){
        cout << "My name is: " << name << endl;
        cout << "My alias is: " << alis << endl;
    }
}

void Spy::interrogate() {
    res = --res;
}

void Spy::set_identity(const char* alias) {
    alis = alias;
}