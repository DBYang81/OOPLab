//
// Created by DBY on 30.11.2021.
//

#ifndef PROJ9_SQUARE_H
#define PROJ9_SQUARE_H
#include "Point.h"

class Square: public Point {
public:
    Square(double Sqx = 0.0, double Sqy = 0.0, double _w = 0.0, double _h = 0.0);
    ~Square(){};
    virtual void input(const char* prompt) override;
    virtual void output() const override;
    virtual double area() const override;

private:
    double width;
    double height;
};


#endif //PROJ9_SQUARE_H
