#ifndef _CIRCLE_H
#define _CIRCLE_H

#include <iostream>
#include "../closed-shape/Closed_Shape.h"

class Circle : public Closed_Shape { // Concrete class
public:
    void draw() override;

    void rotate() override;

    ~Circle() override {
        std::cout << "Circle destructor" << std::endl;
    }
};


#endif //_CIRCLE_H
