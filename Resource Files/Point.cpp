#include "../Header Files/Point.h"

Point::Point() = default;

Point::Point(char* name, double x, double y, double length, double height) : Figure2D(length, height, x, y) {
    this->setName(name);
}

Point::Point( Point& p):Figure2D(p.getLength(),p.getHeight(),p.getX(),p.getY()) {
    this->setName(p.getName());
}

void Point::print() const {
    cout << "Point: ";
    cout << "name = " << this->getName();
    cout << ", x = " << this->getX();
    cout << ", y = " << this->getY() << endl;
}

double Point::Area() {
    return 0;
}

double Point::Perimeter() {
    return 0;
}



