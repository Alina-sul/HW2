#include "../Header Files/Segment.h"
#include "../Header Files/utils.h"

//Constructors
Segment::Segment():Figure2D(0,0,0,0){
    this->p1 = Point();
    this->p2 = Point();
    this->BottomCornerLeft = false;
};

Segment::Segment(Segment& s):Figure2D(s.getLength(),s.getHeight(),0,0){
    this->setName(s.getName());
    this->p1 = s.getP1();
    this->p2 = s.getP2();
    this->BottomCornerLeft = s.getBottomCornerLeft();
}

Segment::Segment(char* name, const Point& p01, const Point& p02):Figure2D(
          abs(p01.getX()-p02.getX()),
          abs(p01.getY()-p02.getY()),
          minX(p01,p02).getX(),
          minY(p01,p02).getY()) {
    this->setName(name);
    this->p1 = p01;
    this->p2 = p02;
    this->BottomCornerLeft = (p01.getX() < p02.getX());
}

Segment::Segment(char *name, const Point& p01, double length, double height, bool bottomCornerLeft)
:Figure2D(length,height,p01.getX(),p01.getY()) {
    this->setName(name);
    this->p1 = Point("p01",p01.getX(),p01.getY());;
    this->BottomCornerLeft = bottomCornerLeft;
    this->p2 = Point("p2",abs(length - p01.getX()),abs(height - p01.getY()));

}

//Setters and Getters
void Segment::setP1(const Point& p) {
    this->p1 = p;
}

Point Segment::getP1() {
    return this->p1;
}

void Segment::setP2(const Point& p) {
    this->p2 = p;
}

Point Segment::getP2() {
    return this->p2;
}

void Segment::setBottomCornerLeft() {
    this->BottomCornerLeft = (this->p1.getX() < this->p2.getX());
}

//Functions
void Segment::print() {
    printPointToPoint(this->getName(),this->p1,this->p2);
}

bool Segment::getBottomCornerLeft() const {
    return this->BottomCornerLeft;
}

void Segment::Resize(double newL, double newH) {
    Figure2D::Resize(newL, newH);
    updateCoordinatesHL(this->p1,this->p2,this->getLength(),this->getHeight());
}

double Segment::Area() {
    return 0;
}

double Segment::Perimeter() {
    double x = p1.getX() - p2.getX();
    double y = p1.getY() - p2.getY();
    return sqrt(pow(x,2) + pow(y,2));
}

void Segment::Shift(double dx, double dy) {
    Figure2D::Shift(dx, dy);
    shiftCoordinates(this->p1, this->p2, dx, dy);
}

void Segment::Scale(double kx, double ky) {
    Figure2D::Scale(kx, ky);
    updateCoordinatesHL(this->p1,this->p2,this->getLength(),this->getHeight());
}

bool Segment::isInside(Figure2D *p) {
    double m = (this->p1.getY() - this->p2.getY())/(this->p1.getX() - this->p2.getX());
    double n = this->p1.getY() - m * this->p1.getX();

    //check if p coordinates are on linear function mx + n = y or beneath and above rectangle
    return (p->getX() <= maxX(this->p1,this->p2).getX() &&
            p->getX() >= minX(this->p1,this->p2).getX() &&
            p->getY() <= (p->getX() * m + n) &&
            p->getY() >= minY(this->p1,this->p2).getY()
            );
}



