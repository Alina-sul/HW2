#ifndef HW2_POINT_H
#define HW2_POINT_H

#include "Figure2D.h"


class Point : public Figure2D{
public:
    Point();
    Point(char* name, double x, double y);
    Point(double x, double y, double length, double height);
    ~Point();

};


#endif //HW2_POINT_H
