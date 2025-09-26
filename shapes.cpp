#include "shapes.hpp"
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle(double r) : radius(r) {}
double Circle::getArea() const {
    return M_PI * radius * radius;
}
double Circle::getPerimeter() const {
    return 2 * M_PI * radius;
}
string Circle::getName() const {
    return "Circle";
}

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}
double Rectangle::getArea() const {
    return length * width;
}
double Rectangle::getPerimeter() const {
    return 2 * (length + width);
}
string Rectangle::getName() const {
    return "Rectangle";
}

Square::Square(double side) : Rectangle(side, side) {}
string Square::getName() const {
    return "Square";
}

RightTriangle::RightTriangle(double side1, double side2) : a(side1), b(side2) {}
double RightTriangle::getArea() const {
    return (a * b) / 2.0;
}
double RightTriangle::getPerimeter() const {
    double c = sqrt(a * a + b * b);
    return a + b + c;
}
string RightTriangle::getName() const {
    return "Right Triangle";
}

IsoscelesRightTriangle::IsoscelesRightTriangle(double leg)
  : RightTriangle(leg, leg) {}
string IsoscelesRightTriangle::getName() const {
    return "Isosceles Right Triangle";
}

void printAreaToScreen(const Shape *s) {
    cout << "Shape: " << s->getName()
    << "\nArea = " << (round(s->getArea()*100))/100
    << "\nPerimeter = " << (round(s->getPerimeter()*100))/100 << endl;
}