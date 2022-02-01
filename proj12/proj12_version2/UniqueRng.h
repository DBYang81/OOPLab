//
// Created by DBY on 19.12.2021.
//

#ifndef PROJ12_VERSION2_UNIQUERNG_H
#define PROJ12_VERSION2_UNIQUERNG_H
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
class UniqueRng {
public:
    UniqueRng(unsigned int _min, unsigned int _max);
    unsigned int operator()();
private:
    unsigned int min;
    unsigned int max;
    vector<unsigned int> numbers;
};



#endif //PROJ12_VERSION2_UNIQUERNG_H
