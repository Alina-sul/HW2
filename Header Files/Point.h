#ifndef HW2_POINT_H
#define HW2_POINT_H

#include "Figure2D.h"


class Point : public Figure2D{
public:
    Point();
    Point(Point const& p);
    Point(char* name, double x, double y, double length = 0, double height = 0);

    void print() override;
    double Area() override ;
    double Perimeter() override;
    void Resize(double newL, double newH) override;
    void Shift(double dx, double dy) override;
    void Scale(double kx, double ky) override;
    bool isInside(Figure2D* p) override;

    Point& operator=(Point const& p);


};


#endif //HW2_POINT_H
