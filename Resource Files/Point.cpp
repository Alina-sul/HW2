#include "../Header Files/Point.h"

//Constructors
Point::Point() = default;

Point::Point(char* name, double x, double y, double length, double height) : Figure2D(length, height, x, y) {
    this->setName(name);
}

Point::Point( Point const& p):Figure2D(p.getLength(),p.getHeight(),p.getX(),p.getY()) {
    this->setName(p.getName());
}

//Functions
void Point::print() {
    cout << "Pt: (" << this->getX()
    << ", " << this->getY() << ")" << endl;
}

double Point::Area() {
    return 0;
}

double Point::Perimeter() {
    return 0;
}


void Point::Resize(double newL, double newH) {
    Figure2D::Resize(0, 0);
}

void Point::Shift(double dx, double dy) {
    Figure2D::Shift(dx, dy);
}

void Point::Scale(double kx, double ky) {
    Figure2D::Scale(0, 0);
    this->setX(this->getX() * kx)  ;
    this->setY(this->getY() * ky)  ;
}


Point &Point::operator=(const Point &p) {
    this->setName(p.getName());
    this->MoveTo(p.getX(),p.getY());
    return *this;
}

bool Point::isInside(Figure2D *p) {
    return (this->getX() == p->getX() && this->getY() == p->getY());
}






