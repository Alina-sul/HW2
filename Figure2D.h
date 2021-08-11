#ifndef HW2_FIGURE2D_H
#define HW2_FIGURE2D_H

#pragma once
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

class Figure2D {
private:
    double x;
    double y;
    double length;
    double height;
    char* name = NULL;
public:
    Figure2D(double l, double h, double x = 0, double y = 0);
    Figure2D(Figure2D& f);
    Figure2D();
    virtual ~Figure2D();
    Figure2D& operator=(Figure2D const& d); //check about const
    void setName(char*);
    double getX();
    double getY();
    double getLength();
    double getHeight();
    const char* getName();
    double Area(); //שטח
    double Perimeter();//היקף
    void Shift(double dx, double dy);

    virtual void MoveTo(double newX, double newY);
    virtual void Resize(double newL, double newH);
    virtual void Scale(double kx, double ky);
    virtual bool isInside(Figure2D* p);
    virtual void print();
    friend ostream& operator<<(ostream& o, Figure2D& d);

};


#endif //HW2_FIGURE2D_H
