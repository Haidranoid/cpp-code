#ifndef _SHAPE_H
#define _SHAPE_H

#include <iostream>

class Shape { // abstract Base class
private:
    // attributes common to all shapes
public:
    virtual void draw() = 0; // pure virtual function
    virtual void rotate() = 0; // pure virtual function
    virtual ~Shape() {
        std::cout << "Shape destructor" << std::endl;
    };
};

#endif //_SHAPE_H
