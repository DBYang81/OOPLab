//definition of class Point
#pragma once
#ifndef PROJ9_POINT_H
#define PROJ9_POINT_H
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <ctime>


class Point {
public:
    //constructor
    Point(double x_coord = 0.0, double y_coord = 0.0);
    // destructor
    virtual ~Point() = default;
    virtual void input(const char* prompt);
    virtual void output() const;
    virtual double area() const;
    void move(double delta_x, double delta_y);
private:
    double x;
    double y;
};


#endif //PROJ9_POINT_H
