#ifndef HW2_CIRCLE_H
#define HW2_CIRCLE_H


class Circle {
private:
    double radius;
public:
    Circle();
    Circle(Circle& c);
    Circle(char* name, Point p, double radius);

    void print() const;
    double Area() const;
    double Perimeter() const;
};


#endif
