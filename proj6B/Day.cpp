//
// Created by DBY on 18.11.2021.
//
#include "Day.h"


using namespace std;

Day::Day() : day(0), month(""), list() {}


bool Day::from_str(const string& s) {
    stringstream sin(s);
    Time time(0,0);
    *this = Day();
    if(sin >> day >> month >> time){
        list.push_back(time);
        while(!sin.eof()) {
            if (sin >> time) {
                list.push_back(time);
                sort(list.begin(),list.end());
            }
        }
        return true;
    }else {
        return false;
    }
}

string Day::to_str() {
    stringstream str_t;
    string time_event;
    str_t << day <<' '<< month;
    for(auto elem: list){
        str_t <<' '<< elem <<' ';
    }
    str_t << endl;
    getline(str_t, time_event);
    return time_event;
}

void Day::dst(int offset) {
    for(auto &elem: list){
        elem = elem + offset;
    }
}




