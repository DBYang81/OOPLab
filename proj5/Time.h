//
// Created by DBY on 10.11.2021.
//

#ifndef PROJ5_TIME_H
#define PROJ5_TIME_H


class Time {
    friend std::ostream& operator<< (std::ostream& output, const Time& t2);
public:
    void read(const std::string& str);
    bool operator< (const Time& t2) const;
    Time operator- (const Time& t2) const;
    Time operator+ (const Time& t2);
    Time operator ++ ();
    Time operator ++ (int);
    void validate();
    Time(int _hour = 0, int _min = 0);
private:
    int hour;
    int min;
};

#endif //PROJ5_TIME_H
