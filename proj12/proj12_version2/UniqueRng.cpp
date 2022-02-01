//
// Created by DBY on 19.12.2021.
//

#include "UniqueRng.h"
UniqueRng::UniqueRng(unsigned int _min, unsigned int _max): min(_min), max(_max) {
    srand(time(NULL));
}

unsigned int UniqueRng::operator()() {
    unsigned int number;
    if (numbers.size() > (max - min)) {
        throw(std::runtime_error("Unable to produce unique random number"));
    }
    do {
        number = rand() % (max-min + 1) + min;
    } while (find(numbers.begin(), numbers.end(), number) != numbers.end());
    numbers.push_back(number);
    return number;
}