#include "../Header Files/Square.h"

//Constructors
Square::Square():
Figure2D(0,0,0,0) {
    this->p1 = Point();
    this->p2 = Point();
    this->side = 0;
    this->center = Point();
};

Square::Square(Square &s):
Figure2D(s.getLength(),s.getHeight(),s.getPoint().getX(),s.getPoint().getY()) {
    this->center = s.getCenter();
    this->side = s.getSide();
}

Square::Square(char *name, const Point& p01, const Point& p02):Figure2D(
        (p01.getX()*2+p02.getX()),
        this->getSide(),
        0,
        (p01.getY() < p02.getY()) ? p01.getY() : p02.getY()
        ) {
    this->setName(name);
    this->p1 = p01;
    this->p2 = p02;
    this->center = Point("Square center",(this->p1.getX()+this->p2.getX())/2,(this->p1.getY()+this->p2.getY())/2);
    this->side = abs(this->p1.getX() - this->p2.getX());

}

Square::Square(char *name, const Point& p01, double side1):Figure2D(
        (p01.getX()*2+side1),
        side1,
        p01.getX(),
        side1
        ) {
    this->setName(name);
    this->p1 = p01;
    this->center = Point("Square center",(this->p1.getX()+this->p2.getX())/2,(this->p1.getY()+this->p2.getY())/2);
    this->side = abs(this->p1.getX() - this->p2.getX());
}

//Setters and Getters
void Square::setPoint(const Point &p) {
    this->p1 = p;
}

Point Square::getPoint() {
    return this->p1;
}

void Square::setCenter() {
    this->center = Point("Square center",(this->p1.getX()+this->p2.getX())/2,(this->p1.getY()+this->p2.getY())/2);
}

Point Square::getCenter() {
    return this->center;
}

void Square::setSide() {
    this->side = abs(this->p1.getX() - this->p2.getX());
}

double Square::getSide() const {
    return this->side;
}

//Functions
double Square::Area() {
    return this->side * this->side;
}

double Square::Perimeter() {
    return this->side * 4;
}

void Square::print() {
    cout << "Square ";
    printCenter();
    cout << " and side " << this->getSide() << endl;
}

void Square::printCenter() {
    cout << this->getName() << " with center (" <<
    this->center.getX() << "," << this->center.getY() << ")";
}


