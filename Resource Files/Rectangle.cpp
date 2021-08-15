#include "../Header Files/Rectangle.h"
#include "../Header Files/utils.h"

//Constructors
Rectangle::Rectangle():Figure2D(0,0,0,0) {
    this->p1 = this->p2 = Point();
}

Rectangle::Rectangle(Rectangle &r):Figure2D(r.getLength(),r.getHeight(),r.getX(),r.getY()) {
    this->setName(r.getName());
}

Rectangle::Rectangle(char *name, const Point& p01, const Point& p02):Figure2D(
        abs(p01.getX() - p02.getX()),
        abs(p01.getY() - p02.getY()),
        minX(p01,p02).getX(),
        minY(p01,p02).getY()
        ) {
    this->setName(name);
    this->p1 = Point("p1",minX(p01,p02).getX(),minY(p01,p02).getY());
    this->p2 = Point("p2",maxX(p01,p02).getX(),maxY(p01,p02).getY());

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
    printPointToPoint(this->getName(),this->p1,this->p2);
}

void Rectangle::Resize(double newL, double newH) {
    Figure2D::Resize(newL, newH);
    updateCoordinatesHL(this->p1,this->p2,this->getLength(),this->getHeight());
}

void Rectangle::Shift(double dx, double dy) {
    Figure2D::Shift(dx, dy);
    shiftCoordinates(this->p1, this->p2, dx, dy);
}

void Rectangle::Scale(double kx, double ky) {
    Figure2D::Scale(kx, ky);
    updateCoordinatesHL(this->p1,this->p2,this->getLength(),this->getHeight());
}



