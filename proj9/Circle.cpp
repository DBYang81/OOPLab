//
// Created by DBY on 30.11.2021.
//

#include "Circle.h"
#include "Point.h"
using namespace std;

Circle ::Circle(double crl_x, double crl_y, double _rad): Point(crl_x, crl_y), radius(_rad) {}

void Circle::input(const char *prompt) {
    cout << prompt;
    Point::input("");
    cout << "Enter radius: ";
    cin >> radius;

}

void Circle::output() const {
    cout << "Circle's area: "<< area() << ' ';
    Point::output();
}

double Circle::area() const {
    const float pi = 3.141592654;
    return pi * radius * radius;
}