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

Segment::Segment(char* name, const Point& p1, const Point& p2):Figure2D(
          abs(p1.getHeight()-p2.getHeight()),
          abs(p1.getLength()-p2.getLength()),
          p1.getX(),p1.getY()) {
    this->setName(name);
    this->p1 = p1;
    this->p2 = p2;
    this->BottomCornerLeft = (p1.getX() < p2.getX());
}

Segment::Segment(char *name, const Point& p1, double length, double height, bool bottomCornerLeft)
:Figure2D(length,height,p1.getX(),p1.getY()) {
    this->setName(name);
    this->p1 = p1;
    this->BottomCornerLeft = bottomCornerLeft;

    Point p2_local("p2",abs(length - p1.getX()),abs(height - p1.getY()));
    this->p2 = p2_local;
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

void Segment::setBottomCornerLeft(bool value) {
    this->BottomCornerLeft = value;
}

//Functions
void Segment::print() {
    printPointToPoint();
}

void Segment::printPointToPoint() {
    cout << this->getName() << ":" ;
    cout << "Point(" << p1.getX() << "," << p1.getY() << ")-(" <<
    p2.getX() << "," << p2.getY() << ")";
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

ostream &operator<<(ostream &o, Segment &s) {
    o << "Segment " << s.getName() << ": "
    << "x=" << s.getX() << " y=" << s.getY()
    << " length=" << s.getLength() << " height=" << s.getHeight();
    return o;
}


