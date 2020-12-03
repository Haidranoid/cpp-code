//
// Created by Administaff on 12/3/20.
//

#ifndef _CHECKING_H
#define _CHECKING_H

#include <iostream>
#include <string>
#include "../account/Account.h"

class Checking : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking &checking_account);

private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double fee = 1.5;
public:
    Checking(std::string name = def_name, double balance = def_balance);

    bool withdraw(double amount);
};


#endif //_CHECKING_H
