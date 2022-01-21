//
// Created by DBY on 23.11.2021.
//
#pragma once
#ifndef PROJ7_RANDGEN_H
#define PROJ7_RANDGEN_H
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;

class RandGen {
public:
    RandGen(int _min, int _max);
    int operator ()();
private:
    int min;
    int max;
    vector<int> numbers;

};


#endif //PROJ7_RANDGEN_H
