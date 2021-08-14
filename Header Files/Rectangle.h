#ifndef HW2_RECTANGLE_H
#define HW2_RECTANGLE_H

#include "Figure2D.h"
#include "Segment.h"
#include "Point.h"


class Rectangle : public Figure2D {
private:
    Point p1;
    Point p2;
public:
    Rectangle();
    Rectangle(Rectangle& r);
    Rectangle(char* name, const Point& p1, const Point& p2);
    Rectangle(char* name, const Point& p1, double length, double height);

    void print() override;
    friend void Segment::printPointToPoint();
    double Area() override;
    double Perimeter() override;
};


#endif
