#include <iostream>
#include "classes/abstract/shape/Shape.h"
#include "classes/abstract/open-shape/Open_Shape.h"
#include "classes/abstract/closed-shape/Closed_Shape.h"
#include "classes/abstract/line/Line.h"
#include "classes/abstract/circle/Circle.h"

using namespace std;

int main() {
    // Shape shape;  // ERROR - abstract class
    // Open_Shape open_shape; // ERROR - abstract class
    // Closed_Shape closed_shape; //  ERROR - abstract class

    Shape *circle = new Circle;
    Shape *line = new Line;

    circle->draw();
    line->draw();

    std::cout << "===================================" << std::endl;

    delete line;
    delete circle;

    return 0;
}


