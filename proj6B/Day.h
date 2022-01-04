//
// Created by DBY on 18.11.2021.
//

#ifndef PROJ6B_DAY_H
#define PROJ6B_DAY_H

#include "Time.h"

using namespace std;

class Day {
public:
    Day();
    bool from_str(const string &s);
    string to_str();
    void dst(int offset);
private:
    int day;
    string month;
    vector<Time> list;
};

#endif //PROJ6B_DAY_H
