#ifndef CPP_COURSE_LINE_H
#define CPP_COURSE_LINE_H

#include <iostream>
#include "../open-shape/Open_Shape.h"

class Line : public Open_Shape {
public:
    void draw() override;

    void rotate() override;

    ~Line() override{
        std::cout << "Line destructor" << std::endl;
    };
};


#endif //CPP_COURSE_LINE_H
