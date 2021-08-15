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

// print functions
void printPointToPoint(char* name, const Point& p1, const Point& p2) {
    cout << name << ": " ;
    cout << "Point(" << p1.getX() << ", " << p1.getY() << ")-(" <<
    p2.getX() << ", " << p2.getY() << ")" << endl;
}
void printCenter(char* name, const Point& center) {
    cout << name << " with center (" <<
    center.getX() << "," << center.getY() << ")";
}


//
void updateCoordinatesHL(const Point& p1,const Point& p2, double length, double height){
    //update coordinates
    maxX(p1,p2).setX(minX(p1,p2).getX() + length);
    maxY(p1,p2).setY(minY(p1,p2).getY() + height);
}

void shiftCoordinates(Point& p1, Point& p2, double dx, double dy) {
    //Shift p1
    p1.setX(p1.getX() + dx);
    p1.setY(p1.getY() + dy);
    //Shift p2
    p2.setX(p2.getX() + dx);
    p2.setY(p2.getY() + dy);
}