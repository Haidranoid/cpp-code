//
// Created by Administaff on 12/4/20.
//

#ifndef _BASE_POLYMORPHIC_H
#define _BASE_POLYMORPHIC_H
#include <iostream>
// final word at the end avoid the inheritance
// class Base_Polymorphic final{
class Base_Polymorphic {
public:
    // final word at the end avoid the override
    // virtual void say_hello() const final{
    virtual void say_hello() const {
        std::cout << "Hello - i'm a Base class object" << std::endl;
    }

    virtual ~Base_Polymorphic() {};
};
#endif //_BASE_POLYMORPHIC_H
