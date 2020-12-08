#ifndef _ILLEGAL_BALANCE_EXCEPTION_H
#define _ILLEGAL_BALANCE_EXCEPTION_H

#include <exception>

class Illegal_Balance_Exception : public std::exception {
public:
    Illegal_Balance_Exception() noexcept = default;

    //noexcept by default
    ~Illegal_Balance_Exception() override = default;

    const char *what() const _NOEXCEPT override;
    //const char *what() const noexcept override;
};


#endif //_ILLEGAL_BALANCE_EXCEPTION_H
