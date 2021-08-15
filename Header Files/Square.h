#ifndef HW2_SQUARE_H
#define HW2_SQUARE_H

#include "Figure2D.h"
#include "Point.h"

class Square : public Figure2D {
private:
    Point p1;
    Point p2;
    Point center;
    double side;
public:
    Square();
    Square(Square& s);
    Square(char* name, const Point& p1, const Point& p2); // check if can be made into square!
    Square(char* name, const Point& p1, double side);

    void setPoint(const Point&); // sets p1
    Point getPoint(); // returns p1
    void setCenter();
    Point getCenter() const;
    void setSide();
    double getSide() const ;

    void print() override;
    double Area() override;
    double Perimeter() override;
    void Resize(double newL, double newH) override;
    void Shift(double dx, double dy) override;
    void Scale(double kx, double ky) override;

    friend ostream& operator<<(ostream& o, Square& d);
    Square& operator=(Square const& s);


};


#endif
