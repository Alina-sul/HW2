#include "../Header Files/Square.h"

//Constructors
Square::Square():
Figure2D(0,0,0,0) {
    this->p1 = Point();
    this->side = 0;
    this->center = Point();
};

Square::Square(Square &s):
Figure2D(s.getSide(),s.getSide(),s.getPoint().getX(),s.getPoint().getY()) {
    this->p1 = s.getPoint();
    this->center = s.getCenter();
    this->side = s.getSide();
}

Square::Square(char *name, Point p1, Point p2) {
    this->setName(name);
}

Square::Square(char *name, Point p1, double side) {

}

//Setters and Getters
void Square::setPoint(const Point &p) {
    this->p1 = p;
}

Point Square::getPoint() {
    return this->p1;
}

void Square::setCenter(const Point& c) {
    this->center = c;
}

Point Square::getCenter() {
    return this->center;
}

void Square::setSide(double s) {
    this->side = s;
}

double Square::getSide() const {
    return this->side;
}

//Functions
double Square::Area() const {
    return this->side * this->side;
}

double Square::Perimeter() const {
    return this->side * 4;
}

void Square::print() const {

}


