#ifndef HW2_CIRCLE_H
#define HW2_CIRCLE_H


#include "Figure2D.h"
#include "Point.h"


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
    void setRadius();
    double getRadius() const;
    void setCenter();
    Point getCenter();

    void print() override;
    double Area() override;
    double Perimeter() override;
    void Resize(double newL, double newH) override;
    void Shift(double dx, double dy) override;
    void Scale(double kx, double ky) override;
};


#endif
