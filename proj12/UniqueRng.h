//
// Created by DBY on 18.12.2021.
//

#ifndef PROJ12_UNIQUERNG_H
#define PROJ12_UNIQUERNG_H
#include <iostream>

using namespace std;

class UniqueRng {
public:
    UniqueRng(unsigned int min, unsigned int max);
    int operator()();
    int range();

private:
    unsigned int min;
    unsigned int max;


};


#endif //PROJ12_UNIQUERNG_H
