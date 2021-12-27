//
// Created by DBY on 18.11.2021.
//
#include "Time.h"
#include <iomanip>
#include <sstream>
using namespace std;

std::istream& operator>> (std::istream& in, Time& t2){
    in >> t2.hour >> t2.min;
    return in;
}

std::ostream& operator<< (std::ostream& out, const Time& t2){
    out << setiosflags(ios::right);
    out << setfill('0') << setw(2) << t2.hour;
    out << ":" << setfill('0') << setw(2) << t2.min;
    return out;
}

void Time::read(const string& s) {
     cout << s << endl;
     string str;
     bool is_bad;
     do{
        is_bad = false;
        getline(cin, str);
        for(char elem: str){
            if(!(elem >= '0' && elem <= '9' || elem >= ':')){
                cout << "Invalid time!" << endl;
                cout << "Enter again: " << endl;
                is_bad = true;
                break;
            }
        }
     }while(is_bad);
    stringstream time;
    time << str;
    time >> hour;
    time.ignore();
    time >> min;
}

bool Time::operator> (const Time& t2) const {
    int t1min, t2min;
    t1min = hour * 60 + min;
    t2min = t2.hour * 60 + t2.min;
    if(t1min > t2min){
        return true;
    }else{
        return false;
    }
}

bool Time::operator== (const Time& t2) const {
    if(hour == t2.hour && min == t2.min ){
        return true;
    }
    return false;
}

Time::Time(int _hour, int _min): hour(_hour), min(_min){

}

void Time :: validate() {
    while((hour > 23 || hour < 0) || (min > 59 || min < 0)) {
        cout << "invalid time!" << endl;
        Time::read("Enter again: ");
    }
}

Time Time::operator- (const Time& t2) const {
    Time aux;
    int diff, t1min, t2min;
    t1min = hour * 60 + min;
    t2min = t2.hour * 60 + t2.min;
    diff = t1min - t2min;
    aux.hour = diff / 60;
    aux.min = diff % 60;
    return aux;
}

/*
Time Time::operator++ (int) {
    Time tmp = *this;
    min++;
    if(min > 59) {
        if(++hour >= 24) hour = hour - 24;
        min = min - 60;
    }
    return tmp;
}

Time Time::operator++() {
    min++;
    if(min > 59){
        if(++hour >= 24) hour = hour - 24;
        min = min - 60;
    }
    return *this;
}

Time Time::operator+ (const Time& t2){
    int total, t1min, t2min;
    t1min = this->hour * 60 +  this->min;
    t2min = t2.hour * 60 + t2.min;
    total = t1min + t2min;
    if((total / 60) > 23){
        this->hour = (total /60) - 24;
    }else{
        this->hour = total / 60;
    }
    if((total % 60) > 59){
        this->min = (total % 60) - 60;
    }else{
        this->min = total % 60;
    }
    return *this;
}

bool Time::operator< (const Time& t2) const {
    int t1min, t2min;
    t1min = hour * 60 + min;
    t2min = t2.hour * 60 + t2.min;
    if(t1min < t2min){
        return true;
    }else{
        return false;
    }
}*/

