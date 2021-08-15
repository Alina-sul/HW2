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
    virtual ~Figure2D() = default;
    Figure2D& operator=(Figure2D const& d);
    void setName(char*);
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    double getLength() const;
    double getHeight() const;
    char* getName() const;
    virtual double Area() = 0; //שטח
    virtual double Perimeter() = 0;//היקף

    virtual void Shift(double dx, double dy);
    virtual void MoveTo(double newX, double newY);
    virtual void Resize(double newL, double newH);
    void Scale(double kx, double ky);
    virtual bool isInside(Figure2D* p);

    virtual void print();
    virtual void printPointToPoint();
    virtual void printCenter();
    friend ostream& operator<<(ostream& o, Figure2D& d);

};