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
    this->setName(s.getName());
    this->center = s.getCenter();
    this->side = s.getSide();
}

Square::Square(char *name, const Point& p01, const Point& p02):Figure2D(
        abs(p01.getX() - p02.getX()),
        abs(p01.getY() - p02.getY()),
        minX(p01,p02).getX(),
        minY(p01,p02).getY()
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
    this->center = Point(this->center.getName(),
                         this->getLength()/2+this->getX(),
                         this->getHeight()/2+this->getY());
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

void Square::Resize(double newL, double newH) {
    Figure2D::Resize(newL, newH);
    updateCoordinatesHL(this->p1,this->p2,this->getLength(),this->getHeight());
    this->setSide();
    this->setCenter();
}

void Square::Shift(double dx, double dy) {
    Figure2D::Shift(dx, dy);
    shiftCoordinates(this->p1, this->p2, dx, dy);
    this->setSide();
    this->setCenter();
}

void Square::Scale(double kx, double ky) {
    Figure2D::Scale(kx, ky);
    updateCoordinatesHL(this->p1,this->p2,this->getLength(),this->getHeight());
    this->setSide();
    this->setCenter();
}

bool Square::isInside(Figure2D *p) {
    return (abs(p->getX() - this->center.getX()) <= this->getSide()/2 &&
    abs(p->getY() - this->center.getY()) <= this->getSide()/2);
}


