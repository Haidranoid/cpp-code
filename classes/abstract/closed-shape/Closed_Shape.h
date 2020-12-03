#ifndef _CLOSED_SHAPE_H
#define _CLOSED_SHAPE_H

#include "../shape/Shape.h"

class Closed_Shape : public Shape { // Abstract class
public:
    ~Closed_Shape() override {
        std::cout << "Closed Shape destructor" << std::endl;
    };
};

#endif //_CLOSED_SHAPE_H
