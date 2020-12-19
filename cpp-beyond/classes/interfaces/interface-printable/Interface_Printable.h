#ifndef _PRINTABLE_H
#define _PRINTABLE_H
#include <iostream>

class Interface_Printable { // interface
    friend std::ostream &operator<<(std::ostream &os, const Interface_Printable &obj);

public:
    virtual void print(std::ostream &os) const = 0;

    virtual ~Interface_Printable(){
        std::cout << "Interface Printable destructor" << std::endl;
    };
};

#endif //_PRINTABLE_H
