#include "shapes.hpp"
#include <cassert>
#include <string>
#include <iostream>

using namespace std;
int main(){
    Circle c(6);
    Rectangle r(5,6);
    Square s(5);
    RightTriangle t(5,10);
    IsoscelesRightTriangle i(10);
//test circle area and perimeter
    assert(c.getArea() < 114);
    assert(c.getArea() > 112);
    assert(c.getPerimeter() < 38);
    assert(c.getPerimeter() > 36);

//test rectangle area and perimeter
    assert(r.getArea() == 30);
    assert(r.getPerimeter() == 22);
//test square area and perimeter
    assert(s.getArea()==25);
    assert(s.getPerimeter() == 20);
    // test triangles
    assert(t.getArea() == 25);
    assert(t.getPerimeter() <28);
    assert(t.getPerimeter() >25);
    assert(i.getArea() == 50);
    assert(i.getPerimeter() <35);
    assert(i.getPerimeter() > 33);
//test name
    assert(c.getName() == "Circle");
    assert(r.getName() == "Rectangle");
    assert(s.getName() == "Square");
    assert(t.getName() == "Right Triangle");
    assert(i.getName() == "Isosceles Right Triangle");

//test print
    printAreaToScreen(&c);

    cout<<endl<<"Tests completed successfully";
}