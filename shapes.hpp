#ifndef SHAPES_HPP
#define SHAPES_HPP

#include <string>
using namespace std;

class Shape {
public:
    virtual ~Shape() = default;
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual string getName() const = 0;
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r);
    double getArea() const override;
    double getPerimeter() const override;
    string getName() const override;
};

class Rectangle : public Shape {
protected:
    double length;
    double width;
public:
    Rectangle(double l, double w);
    double getArea() const override;
    double getPerimeter() const override;
    string getName() const override;
};

class Square : public Rectangle {
public:
    Square(double side);
    string getName() const override;
};

class RightTriangle : public Shape {
    double a;
    double b;
public:
    RightTriangle(double side1, double side2);
    double getArea() const override;
    double getPerimeter() const override;
    string getName() const override;
};

class IsoscelesRightTriangle : public RightTriangle {
public:
    explicit IsoscelesRightTriangle(double leg);
    string getName() const override;
};

void printAreaToScreen(const Shape *s);

#endif
