//
// Created by DBY on 30.11.2021.
//

#include "Square.h"
#include "Point.h"
using namespace std;

Square::Square(double Sqx, double Sqy, double _w, double _h): Point(Sqx, Sqy), width(_w), height(_h){}

void Square::input(const char* prompt){
    cout << prompt;
    Point::input("");
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

}

void Square::output() const {
    cout << "Square's area: "<< area() << ' ';
    Point::output();
}

double Square::area() const {
    return width * height;
}