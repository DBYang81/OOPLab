//
// Created by DBY on 23.11.2021.
//

#include "RandGen.h"

RandGen ::RandGen(int _min, int _max): min(_min), max(_max), numbers() {srand(time(NULL));}

int RandGen ::operator()() {
    int number;
    do{
        number = rand() % (max - min + 1)+ min;
    }while(find(numbers.begin(),numbers.end(),number) != numbers.end());
    numbers.push_back(number);
    return number;
}