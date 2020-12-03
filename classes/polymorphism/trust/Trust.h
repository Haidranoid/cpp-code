//
// Created by Administaff on 12/3/20.
//

#ifndef _TRUST_H
#define _TRUST_H

#include <ostream>
#include "../saving/Saving.h"

class Trust : public Saving {
    friend std::ostream &operator<<(std::ostream &os, const Trust &trusted_account);

private:
    static constexpr const char *def_name = "Unamed Trusted Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus = 50;
protected:
    int withdraw_counter = 1;
public:

    Trust(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

    bool deposit(double amount);

    bool withdraw(double amount);
};


#endif //_TRUST_H
