#include "../Header Files/Circle.h"

//Constructors
Circle::Circle():Figure2D(0,0,0,0) {
    this->radius = 0;
    this->p1 = Point();
    this->center = Point();
};

Circle::Circle(Circle &c):Figure2D(c.getLength(),c.getHeight(),c.getX(),c.getY()) {
    this->setName(c.getName());
    this->p1 = c.getPoint();
    this->radius = c.getRadius();
    this->center = c.getCenter();
}

Circle::Circle(char *name, const Point &p, double radius):Figure2D(2*radius,2*radius,p.getX(),p.getY()) {
    this->setName(name);
    this->p1 = p;
    this->radius = radius;
    this->center = Point("Circle center", p.getX() + radius, p.getY() + radius);
}

//Getters and Setters
void Circle::setPoint(const Point &p) {
    this->p1 = p;
}

Point Circle::getPoint() {
    return this->p1;
}

void Circle::setRadius(double r) {
    this->radius = r;
}

double Circle::getRadius() const {
    return this->radius;
}

void Circle::setCenter() {
    this->center = Point(this->center.getName(),this->getLength()/2,this->getHeight()/2);
}

Point Circle::getCenter() {
    return this->center;
}

//Functions
double Circle::Area() {
    return 0;
}

double Circle::Perimeter() {
    return 0;
}


void Circle::print() const {

}


