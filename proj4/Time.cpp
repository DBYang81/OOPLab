//
// Created by DBY on 9.11.2021.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Time.h"

using namespace std;

void Time::read(const string& strInput) {
    string str_time;
    bool is_bad;
    cout << strInput << endl;
    do {
        is_bad = false;
        getline(cin, str_time);
        for(char elem:str_time){
            if(!(elem >= '0' && elem <= '9' || elem == ':')){
                cout << "Invalid time!" << endl;
                cout << "Enter again:" << endl;
                is_bad = true;
                break;
            }
        }
    }while(is_bad);
    stringstream time;
    time << str_time;
    time >> hour;
    time.ignore();
    time >> min;
}

bool Time::lessThan(Time t2) const {
    int t1min, t2min;
    t1min = hour * 60 + min;
    t2min = t2.hour * 60 + t2.min;
    if(t1min < t2min){
        return true;
    }else{
        return false;
    }
}

Time Time::subtract(Time t2) const {
    Time aux;
    int diff, t1min, t2min;
    t1min = hour * 60 + min;
    t2min = t2.hour * 60 + t2.min;
    diff = t1min - t2min;
    aux.hour = diff / 60;
    aux.min = diff % 60;
    return aux;
}

void Time::display() const {
    cout << setfill('0') << setw(2) << hour;
    cout << ':' << setfill('0') << setw(2) << min;
}

void Time :: validate() {
    while((hour > 23 || hour < 0) || (min > 59 || min < 0)) {
        cout << "invalid time!" << endl;
        Time::read("Enter again: ");
    }
}