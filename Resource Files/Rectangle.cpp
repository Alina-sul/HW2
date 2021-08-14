#include "../Header Files/Rectangle.h"

//Constructors
Rectangle::Rectangle():Figure2D(0,0,0,0) {
    this->p1 = this->p2 = Point();
}

Rectangle::Rectangle(Rectangle &r):Figure2D(r.getLength(),r.getHeight(),r.getX(),r.getY()) {
    this->setName(r.getName());
}

Rectangle::Rectangle(char *name, const Point& p1, const Point& p2):Figure2D(
        abs(p1.getX() - p2.getX()),
        abs(p1.getY() - p2.getY())
        ) {
    this->setName(name);
}

Rectangle::Rectangle(char *name, const Point& p1, double length, double height):
Figure2D(length, height, p1.getX(), p1.getY() ) {
    this->setName(name);
}

//Functions
double Rectangle::Area() {
    return this->getLength() * this->getHeight();
}

double Rectangle::Perimeter() {
    return 2 * this->getLength() + 2 * this->getHeight();
}

void Rectangle::print() {
    printPointToPoint();
}

