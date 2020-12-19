//
// Created by Administaff on 12/4/20.
//

#ifndef _DERIVED_POLYMORPHIC_H
#define _DERIVED_POLYMORPHIC_H

#include <iostream>

// final word at the end avoid the inheritance
// class Derived_Polymorphic final : public Base_Polymorphic {
class Derived_Polymorphic : public Base_Polymorphic {
public:
    // final word at the end avoid the override
    // void say_hello() const final {
    void say_hello() const override {
        std::cout << "Hello - i'm a Derived class object" << std::endl;
    }

    ~Derived_Polymorphic() override {};
};

#endif //_DERIVED_POLYMORPHIC_H
