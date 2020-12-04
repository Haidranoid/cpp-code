#ifndef _SQUARE_H
#define _SQUARE_H

#include "../closed-shape/Closed_Shape.h"
#include <iostream>

class Square : public Closed_Shape { // Concrete class
public:
    void draw() override;

    void rotate() override;

    ~Square() override {
        std::cout << "Square destructor" << std::endl;
    };
};

#endif //_SQUARE_H
