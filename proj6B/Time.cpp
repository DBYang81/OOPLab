//
// Created by DBY on 18.11.2021.
//

#include "Time.h"

using namespace std;

Time::Time(int _hour, int _min) :hour(_hour), min(_min){}

istream& operator>> (istream& in, Time& t2){
    in >> t2.hour;
    in.ignore();
    in >> t2.min;
    if (in.fail() || (t2.hour > 23 || t2.hour < 0)
    || (t2.min > 59 || t2.min < 0)){
        in.clear();
        in.ignore(numeric_limits<streamsize>::max(), ' ');
        in >> t2.hour;
        in.ignore();
        in >> t2.min;
    }
    return in;
}

ostream& operator<< (ostream& out, const Time& t2){
    out << setiosflags(ios::right);
    out << setfill('0') << setw(2) << t2.hour;
    out << ":" << setfill('0') << setw(2) << t2.min;
    return out;
}

bool Time::operator> (const Time& t2) const{
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

bool Time::operator< (const Time& t2) const {
    int t1min, t2min;
    t1min = hour * 60 + min;
    t2min = t2.hour * 60 + t2.min;
    if(t1min < t2min){
        return true;
    }else{
        return false;
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
Time Time::operator+ (const Time& t2){
    int total = (hour * 60 + min) + (t2.hour * 60 + t2.min);
    if(total < 0){
        this -> hour = (24 * 60 + total) / 60;
    }else{
        if ((total / 60) > 23){
            this->hour = (total /60) - 24;
        }else{
            this->hour = total / 60;
        }
        if((total % 60) > 59){
            this->min = (total % 60) - 60;
        }else{
            this->min = total % 60;
        }
    }

    return *this;
}

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

