#ifndef _PRINTABLE_H
#define _PRINTABLE_H

#include <iostream>

class Interface_Printable { // interface
    friend std::ostream &operator<<(std::ostream &os, const Interface_Printable &obj);

public:
    virtual void print(std::ostream &os) const = 0;

    virtual ~Interface_Printable() = default;
};

std::ostream &operator<<(std::ostream &os, const Interface_Printable &obj) {
    obj.print(os);
    return os;
}

#endif //_PRINTABLE_H
