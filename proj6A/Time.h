//
// Created by DBY on 18.11.2021.
//
#pragma once
#ifndef PROJ6A_TIME_H
#define PROJ6A_TIME_H
#include <iostream>

class Time {
    friend std::istream& operator>> (std::istream& in, Time& t2);
    friend std::ostream& operator<< (std::ostream& out, const Time& t2);
public:
    void read(const std::string& s);
    bool operator> (const Time& t2) const;
    bool operator== (const Time& t2) const;
    Time operator- (const Time& t2) const;
    //bool operator< (const Time& t2) const;
    //Time operator+ (const Time& t2);
    //Time operator ++ ();
    //Time operator ++ (int);
    void validate();
    Time(int _hour = 0, int _min = 0);
private:
    int hour;
    int min;
};

#endif //PROJ6A_TIME_H
