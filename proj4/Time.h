//
// Created by DBY on 9.11.2021.
//

#ifndef PROJ4_TIME_H
#define PROJ4_TIME_H


class Time {
public:
        void read(const std::string& str);
        void validate();
        bool lessThan(Time t2) const;
        Time subtract(Time t2) const;
        void display() const;
        Time (){
            hour = 0;
            min = 0;
        }
private:
        int hour;
        int min;
};

#endif //PROJ4_TIME_H
