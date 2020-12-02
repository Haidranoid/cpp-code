#ifndef _DERIVED_H
#define _DERIVED_H

#include <iostream>
#include "../base/Base.h"


class Derived : public Base {
    // Note friends of Derived have access to only what Derived has access to

private:
    int doubled_value;

public:
    Derived() : Base(), doubled_value{0} {
        std::cout << "Derived no-args constructor" << std::endl;
    }

    Derived(int x) : Base(x), doubled_value{x * 2} {
        std::cout << "Derived {int} overloaded constructor" << std::endl;
    }

    Derived(const Derived &source) : Base(source), doubled_value{source.doubled_value} {
        std::cout << "Derived copy constructor" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor" << std::endl;
    }

    Derived &operator=(const Derived &rhs) {
        std::cout << "Derived operator=" << std::endl;

        if (this != &rhs) {
            Base::operator=(rhs);
            this->doubled_value = rhs.doubled_value;
        }
        return *this;
    }
};


#endif //_DERIVED_H
