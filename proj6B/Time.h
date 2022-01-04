//
// Created by DBY on 18.11.2021.
//
#pragma once
#ifndef PROJ6B_TIME_H
#define PROJ6B_TIME_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>

class Time {
friend std::ostream& operator<< (std::ostream &out, const Time& t2);
friend std::istream& operator>> (std::istream &in, Time& t2);
public:
    bool operator> (const Time& t2) const;
    bool operator< (const Time& t2) const;
    bool operator== (const Time& t2) const;
    Time operator- (const Time& t2) const;
    Time operator+ (const Time& t2);
    Time operator++ (int);
    Time operator++();
    Time(int _hour = 0, int _min = 0);
private:
    int hour;
    int min;
};


#endif //PROJ6B_TIME_H
