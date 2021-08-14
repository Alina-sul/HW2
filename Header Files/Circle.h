#ifndef HW2_CIRCLE_H
#define HW2_CIRCLE_H


#include "Figure2D.h"
#include "Point.h"
#include "Square.h"


class Circle: public Figure2D{
private:
    Point p1, center;
    double radius;
public:
    Circle();
    Circle(Circle& c);
    Circle(char* name, const Point& p, double radius);

    void setPoint(const Point&);
    Point getPoint();
    void setRadius(double r);
    double getRadius() const;
    void setCenter();
    Point getCenter();

    void print() const;
    friend void Square::printCenter();
    double Area() override;
    double Perimeter() override;
};


#endif
