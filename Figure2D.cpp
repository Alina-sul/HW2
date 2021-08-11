#include "Figure2D.h"

Figure2D::Figure2D(double l, double h, double x, double y) {

}

Figure2D::Figure2D(Figure2D &f) {

}

Figure2D::Figure2D() {

}

Figure2D::~Figure2D() {

}

Figure2D &Figure2D::operator=(const Figure2D &d){

}

void Figure2D::setName(char *) {

}

double Figure2D::getX() {
    return 0;
}

double Figure2D::getY() {
    return 0;
}

double Figure2D::getLength() {
    return 0;
}

double Figure2D::getHeight() {
    return 0;
}

const char *Figure2D::getName() {
    return nullptr;
}

double Figure2D::Area() {
    return 0;
}

double Figure2D::Perimeter() {
    return 0;
}

void Figure2D::Shift(double dx, double dy) {

}

void Figure2D::MoveTo(double newX, double newY) {

}

void Figure2D::Resize(double newL, double newH) {

}

void Figure2D::Scale(double kx, double ky) {

}

bool Figure2D::isInside(Figure2D *p) {
    return false;
}

void Figure2D::print() {

}

ostream &operator<<(ostream &o, Figure2D &d) {
    return o;
}


