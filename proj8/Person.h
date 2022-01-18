//
// Created by DBY on 27.11.2021.
//
#pragma once
#ifndef PROJ8_PERSON_H
#define PROJ8_PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    explicit Person(const char* name = "nobody");
    virtual ~Person() = default;
    virtual void identity() const;
    virtual void interrogate();
private:
    string name;

};


#endif //PROJ8_PERSON_H
