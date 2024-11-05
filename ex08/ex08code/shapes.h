//
// Created by asbpo on 29-10-2024.
//

#ifndef INC_02393DTU_SHAPES_H
#define INC_02393DTU_SHAPES_H
#include <cmath>
class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual double height() = 0;
    virtual double width() = 0;
    virtual void rotate() = 0;
protected:
    Shape();
    double x,y;
};

class Rectangle : public Shape{
public:
    Rectangle(double x, double y);
    double area() override;
    double perimeter() override;
    double height() override;
    double width() override;
    void rotate() override;
protected:
    double x,y;
};
class Square : public Rectangle{
public:
    explicit Square(double a);
};

class Circle : public Shape{
public:
    explicit Circle(double radi);
    double area() override;
    double perimeter() override;
    double height() override;
    double width() override ;
    void rotate() override;
protected:
    double radi;
};

#endif //INC_02393DTU_SHAPES_H




