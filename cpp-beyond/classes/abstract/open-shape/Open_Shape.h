#ifndef _OPEN_SHAPE_H
#define _OPEN_SHAPE_H

#include "../shape/Shape.h"

class Open_Shape : public Shape { // Abstract class
public:
    ~Open_Shape() override{
        std::cout << "Open Shape destructor" << std::endl;
    };
};

#endif //_OPEN_SHAPE_H
