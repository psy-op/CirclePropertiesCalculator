#include <iostream>
#include "circle.h"
#include <string>

using namespace std;

int main() {
    circle cd(1, 3, 4);
    cd.move(6, 6);
    cd.setRadius(3);

    cd.getArea();
    cd.getRadius();
    cd.getX();
    cd.getY();

    cd.displayCircle();

    return 0;
}
