#include "Interface_Printable.h"

std::ostream &operator<<(std::ostream &os, const Interface_Printable &obj) {
    obj.print(os);
    return os;
}

