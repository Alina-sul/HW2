#pragma once
//#define _CRT_SECURE_NO_WARNINGS
//#define PI

#include <math.h>
#include <iostream>

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
    double getX() const;
    double getY() const;
    double getLength() const;
    double getHeight() const;
    char* getName() const;
    virtual double Area(); //שטח
    virtual double Perimeter();//היקף
    void Shift(double dx, double dy);

    void MoveTo(double newX, double newY);
    void Resize(double newL, double newH);
    void Scale(double kx, double ky);
    virtual bool isInside(Figure2D* p);
    virtual void print();
    friend ostream& operator<<(ostream& o, Figure2D& d);

};