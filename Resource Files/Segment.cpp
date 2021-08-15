#include "../Header Files/Segment.h"

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
          p01.getX(),p02.getY()) {
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

    Point p2_local("p2",abs(length - p01.getX()),abs(height - p01.getY()));
    this->p2 = p2_local;
    ;
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
    printPointToPoint();
}

void Segment::printPointToPoint() {
    cout << this->getName() << ": " ;
    cout << "Point(" << p1.getX() << ", " << p1.getY() << ")-(" <<
    p2.getX() << ", " << p2.getY() << ")" << endl;
}

bool Segment::getBottomCornerLeft() const {
    return this->BottomCornerLeft;
}

double Segment::Area() {
    return 0;
}

double Segment::Perimeter() {
    double x = p1.getX() - p2.getX();
    double y = p1.getY() - p2.getY();
    return sqrt(pow(x,2) + pow(y,2));
}


