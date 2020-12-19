#ifndef _INSUFFICIENT_FUNDS_EXCEPTION_H
#define _INSUFFICIENT_FUNDS_EXCEPTION_H

#include <exception>

class Insufficient_Funds_Exception : public std::exception {
public:
    Insufficient_Funds_Exception() noexcept = default;

    ~Insufficient_Funds_Exception() override = default;

    const char *what() const _NOEXCEPT override;
};


#endif //_INSUFFICIENT_FUNDS_EXCEPTION_H
