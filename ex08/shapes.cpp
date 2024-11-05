//
// Created by asbpo on 29-10-2024.
//

#include "shapes.h"

Shape::Shape(): x{0},y{0} {}

Rectangle::Rectangle(double a, double b) : x{a}, y{b} {}
double Rectangle::height() {
    return x;
}
double Rectangle::width() {
    return y;
}
double Rectangle::area(){
    return x*y;
}
double Rectangle::perimeter() {
    return 2*x+2*y;
}
void Rectangle::rotate() {
    double t = x;
    x = y;
    y = t;
}
Square::Square(double a) : Rectangle(a,a) {
}
Circle::Circle(double radi): radi{radi}{}
double Circle::width() {
    return 2*radi;
}
double Circle::height() {
    return 2*radi;
}
double Circle::area() {
    return M_PI*(pow(radi,2));
}
double Circle::perimeter() {
    return 2*M_PI*radi;
}
void Circle::rotate(){

}
