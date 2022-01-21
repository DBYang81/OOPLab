//
// Created by DBY on 30.11.2021.
//

#include "Point.h"
using namespace std;

Point::Point(double x_coord, double y_coord): x(x_coord), y(y_coord){}

void Point::input(const char *prompt)  {
    cout << prompt << endl;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
}
void Point::output() const {
    cout << "Coordinates: " << '(' << x << ',' << y << ')'<< endl;
}

double Point::area() const {
    return 0.0;
}

void Point::move(double delta_x, double delta_y) {
    x = x + delta_x;
    y = y + delta_y;

}