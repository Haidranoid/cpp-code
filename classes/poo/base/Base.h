#ifndef _BASE_H
#define _BASE_H

#include <iostream>


class Base {
    // Note friends of Base have access to all

private:
    int value;

public:
    Base() : value{0} {
        std::cout << "Base no-args constructor" << std::endl;
    }

    Base(int x) : value{x} {
        std::cout << "Base {int} overloaded constructor" << std::endl;
    }

    Base(const Base &source) : value{source.value} {
        std::cout << "Base copy constructor" << std::endl;
    }

    ~Base() {
        std::cout << "Base destructor" << std::endl;
    }

    Base &operator=(const Base &rhs){
        std::cout << "Base operator=" << std::endl;

        if (this != &rhs){
            this->value = rhs.value;
        }
        return *this;
    }

    void say_hello() const {
        std::cout << "Hello - i'am Base class object" << std::endl;
    }
};


#endif //_BASE_H
