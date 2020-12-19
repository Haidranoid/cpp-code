//
// Created by Jose Eduardo Martinez Lara on 12/8/20.
//

#include "Insufficient_Funds_Exception.h"

const char *Insufficient_Funds_Exception::what() const noexcept {
    return "Insufficient funds exception";
}
