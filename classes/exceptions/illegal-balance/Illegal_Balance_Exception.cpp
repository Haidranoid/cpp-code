//
// Created by Administaff on 12/8/20.
//

#include "Illegal_Balance_Exception.h"

const char *Illegal_Balance_Exception::what() const noexcept {
    return "Illegal balance exception";
}
