//
// Created by Jose Eduardo Martinez Lara on 12/28/20.
//

#include "RGB.h"

RGB::RGB(double r, double g, double b)
        : r{r}, g{g}, b{b} {
}

RGB RGB::operator-(const RGB &rhs) const {
    return RGB(r - rhs.r, g - rhs.g, b - rhs.b);
}
