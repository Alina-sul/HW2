#ifndef HW2_UTILS_H
#define HW2_UTILS_H

#include "Point.h"

Point& minX(const Point& a, const Point& b);
Point&  minY(const Point& a, const Point& b);
Point & maxX(const Point& a, const Point& b);
Point & maxY(const Point& a, const Point& b);
void updateCoordinatesHL(const Point& p1,const Point& p2, double length, double height);

#endif
