#ifndef HW2_SQUARE_H
#define HW2_SQUARE_H

#include "Figure2D.h"
#include "Point.h"

class Square : public Figure2D {
private:
    Point p1;
    Point center;
    double side;
public:
    Square();
    Square(Square& s);
    Square(char* name, Point p1, Point p2); // check if can be made into square!
    Square(char* name, Point p1, double side);

    void setPoint(const Point&);
    Point getPoint();
    void setCenter(const Point&);
    Point getCenter();
    void setSide(double side);
    double getSide() const ;

    void print() const;
    void printCenter();
    double Area() const;
    double Perimeter() const;
};


#endif
