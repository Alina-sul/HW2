#ifndef HW2_POINT_H
#define HW2_POINT_H

#include "Figure2D.h"


class Point : public Figure2D{
public:
    Point();
    Point(Point& p);
    Point(char* name, double x, double y, double length = 0, double height = 0);
    void print() const;
};


#endif //HW2_POINT_H
