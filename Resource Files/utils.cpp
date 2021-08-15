#include "../Header Files/utils.h"

// min and max Points
Point& minX(const Point& a, const Point& b) {
    return const_cast<Point &>((a.getX() > b.getX()) ? b : a);
}
Point& minY(const Point& a, const Point& b) {
    return const_cast<Point &>((a.getY() > b.getY()) ? b : a);
}
Point& maxX(const Point& a, const Point& b) {
    return const_cast<Point &>((a.getX() > b.getX()) ? a : b);
}
Point& maxY(const Point& a, const Point& b) {
    return const_cast<Point &>((a.getY() > b.getY()) ? a : b);
}

void updateCoordinatesHL(const Point& p1,const Point& p2, double length, double height){
    //update coordinates
    maxX(p1,p2).setX(minX(p1,p2).getX() + length);
    maxY(p1,p2).setY(minY(p1,p2).getY() + height);
}