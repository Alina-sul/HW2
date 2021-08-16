#include "../Header Files/Circle.h"
#include "../Header Files/utils.h"

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

void Circle::setRadius() {
    this->radius = this->getLength()/2;
}

double Circle::getRadius() const {
    return this->radius;
}

void Circle::setCenter() {
    this->center = Point(this->center.getName(),
                         this->getLength()/2+this->getX(),
                         this->getHeight()/2+this->getY());}

Point Circle::getCenter() {
    return this->center;
}

//Functions
double Circle::Area() {
    return M_PI * pow(this->radius,2);
}

double Circle::Perimeter() {
    return M_PI * 2 * this->radius;
}


void Circle::print() {
    cout << "Circle ";
    printCenter(this->getName(),this->center);
    cout << " and radius = " << this->getRadius() << endl;
}

void Circle::Resize(double newL, double newH) {
    Figure2D::Resize(newL, newH);
    this->setRadius();
    this->setCenter();
}

void Circle::Shift(double dx, double dy) {
    Figure2D::Shift(dx, dy);
    this->setRadius();
    this->setCenter();
}

void Circle::Scale(double kx, double ky) {
    Figure2D::Scale(kx, ky);
    this->setRadius();
    this->setCenter();
}

bool Circle::isInside(Figure2D *p) {
    //check if p coordinates are inside circle function (x-a)^2 + (y-b)^2 = R^2
    return ((pow(p->getX() - this->center.getX(),2) +
    pow(p->getY() - this->center.getY(),2) == pow(this->getRadius(),2)));
}
