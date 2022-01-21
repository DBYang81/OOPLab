//
// Created by DBY on 30.11.2021.
//

#ifndef PROJ9_CIRCLE_H
#define PROJ9_CIRCLE_H
#include "Point.h"

class Circle: public Point{
public:
    Circle(double crl_x = 0.0, double crl_y = 0.0, double _rad = 1.0);
    ~Circle() = default;
    virtual void input(const char* prompt) override;
    virtual void output() const override;
    virtual double area() const override;
private:
    double radius;
};


#endif //PROJ9_CIRCLE_H
