#include <iostream>
#include "circle.h"
#include <string>

using namespace std;

circle::circle() {
    xcord = 0;
    ycord = 0;
    rad = 10.0;
}

circle::circle(int r, int x, int y) {
    rad = r;
    xcord = x;
    ycord = y;
}

void circle::move(int horiz, int vert) {
    xcord = horiz;
    ycord = vert;
}

void circle::setRadius(double r) {
    if (r > 0) {
        rad = r;
    } else {
        rad = 10.0;
    }
}

int circle::getX() {
    return xcord;
}

int circle::getY() {
    return ycord;
}

double circle::getRadius() {
    return rad;
}

double circle::getArea() {
    return 3.14159265359 * rad * rad;
}

void circle::displayCircle() {
    cout << "The circle radius is: " << rad <<
         " on the coordinates (" << xcord << "," << ycord << ")" <<
         " with an area of " << getArea();
}
