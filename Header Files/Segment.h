#ifndef HW2_SEGMENT_H
#define HW2_SEGMENT_H

#include "Figure2D.h"
#include "Point.h"


class Segment : public Figure2D{
private:
    Point p1;
    Point p2;
    bool BottomCornerLeft;
public:
    Segment();
    Segment(Segment& s);
    Segment(char* name, const Point& p1, const Point& p2);
    Segment(char* name, const Point& p1, double length, double height, bool bottomCornerLeft);

    void setP1(const Point& p);
    Point getP1();
    void setP2(const Point& p);
    Point getP2();
    void setBottomCornerLeft();
    bool getBottomCornerLeft() const;

    void print() override ;
    double Area() override;
    double Perimeter() override;
    void Resize(double newL, double newH) override;
    void Shift(double dx, double dy) override;
    void Scale(double kx, double ky) override;

};


#endif
