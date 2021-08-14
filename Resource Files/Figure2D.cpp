#include "../Header Files/Figure2D.h"

Figure2D::Figure2D(double l, double h, double x, double y) {
    this->length = l;
    this->height = h;
    this->x = x;
    this->y = y;
}

Figure2D::Figure2D(Figure2D &f) {
    this->height = f.getHeight();
    this->length = f.getLength();
    this->x = f.getX();
    this->y = f.getY();
}

Figure2D::Figure2D() {
    this->length = 0;
    this->height = 0;
    this->x = 0;
    this->y = 0;
}

void Figure2D::setName(char* str_name) {
    this->name = str_name;
}

double Figure2D::getX() const {
    return this->x;
}

double Figure2D::getY() const {
    return this->y;
}

double Figure2D::getLength() const {
    return this->length;
}

double Figure2D::getHeight() const {
    return this->height;
}

char* Figure2D::getName() const{
    return this->name;
}

void Figure2D::Shift(double dx, double dy) {
    this->x = dx;
    this->y = dy;
}

void Figure2D::MoveTo(double newX, double newY) {
    this->x = newX;
    this->y = newY;
}

void Figure2D::Resize(double newL, double newH) {
    this->length = newL;
    this->height = newH;
}

void Figure2D::Scale(double kx, double ky) {
    this->x = kx;
    this->y = ky;
}

bool Figure2D::isInside(Figure2D *p) {
    return false;
}

void Figure2D::print() {

}

ostream &operator<<(ostream &o, Figure2D &d) {
    o << "x=" << d.getX() << " y=" << d.getY()
    << " length=" << d.getLength() << " height=" << d.getHeight();
    return o;
}

Figure2D &Figure2D::operator=(const Figure2D &d){

}
