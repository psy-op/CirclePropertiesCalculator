#ifndef CIRCLE_H
#define CIRCLE_H

class circle {
private:
    int xcord;
    int ycord;
    double rad;

public:
    circle();
    circle(int r, int x, int y);
    void move(int horiz, int vert);
    void setRadius(double r);
    int getX();
    int getY();
    double getRadius();
    double getArea();
    void displayCircle();
};

#endif
