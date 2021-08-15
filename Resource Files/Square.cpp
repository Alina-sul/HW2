#include "../Header Files/Square.h"
#include "../Header Files/utils.h"

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
    this->center = Point("Square center",this->getLength()/2,this->getHeight()/2+p01.getY());
    this->side = side1;
}

//Setters and Getters
void Square::setPoint(const Point &p) {
    this->p1 = p;
}

Point Square::getPoint() {
    return this->p1;
}

void Square::setCenter() {
    this->center = Point(this->center.getName(),this->getLength()/2,this->getHeight()/2+this->p1.getY());
}

Point Square::getCenter() const{
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
    printCenter(this->getName(),this->center);
    cout << " and side = " << this->getSide() << endl;
}

ostream &operator<<(ostream &o, Square &d) {
    d.print();
    return o;
}

Square &Square::operator=(const Square &s) {
    this->setName(s.getName());
    this->p1 = s.p1;
    this->p2 = s.p2;
    this->side = s.getSide();
    this->center = s.getCenter();
    return *this;
}


