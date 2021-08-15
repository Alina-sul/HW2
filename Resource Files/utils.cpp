#include "../Header Files/utils.h"

Point minX(const Point& a, const Point& b) {
    return (a.getX() > b.getX()) ? b : a;
}

Point minY(const Point& a, const Point& b) {
    return (a.getY() > b.getY()) ? b : a;
}

Point maxX(const Point& a, const Point& b) {
    return (a.getX() > b.getX()) ? a : b;
}

Point maxY(const Point& a, const Point& b) {
    return (a.getY() > b.getY()) ? a : b;
}