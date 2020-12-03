//
// Created by Administaff on 12/3/20.
//

#ifndef _SAVING_H
#define _SAVING_H
#include <string>
#include "../account/Account.h"

class Saving: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Saving &saving_account);

private:
    static constexpr const char *def_name = "Unnamed Savings Account_Test";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Saving(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

    bool deposit(double amount);

};


#endif //_SAVING_H
