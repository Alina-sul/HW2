#ifndef HW2_SQUARE_H
#define HW2_SQUARE_H

#include "Figure2D.h"
#include "Point.h"

class Square : public Figure2D{
public:
    Square();
    Square(Square& s);
    Square(char* name, Point p1, Point p2);

    void print() const;
    double Area() const;
    double Perimeter() const;
};


#endif
