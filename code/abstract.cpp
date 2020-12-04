#include <vector>
#include "../classes/abstract/shape/Shape.h"
#include "../classes/abstract/line/Line.h"
#include "../classes/abstract/circle/Circle.h"
#include "../classes/abstract/square/Square.h"

void abstract(){
    // Shape shape;  // ERROR - abstract class
    // Open_Shape open_shape; // ERROR - abstract class
    // Closed_Shape closed_shape; //  ERROR - abstract class

    Shape *line = new Line;
    Shape *circle = new Circle;
    Shape *square = new Square;

    std::vector<Shape *> shapes{circle, line, square};

    for (Shape *shape: shapes)
        shape->draw();


    std::cout << "======== Cleanup  ==========" << std::endl;

    delete line;
    delete circle;
    delete square;
}
