//
// Created by Administaff on 11/30/20.
//

#ifndef _SAVING_ACCOUNT_H
#define _SAVING_ACCOUNT_H

#include "../account/Account.h"

class Saving_Account : public Account {
private:
    double int_rate;
public:
    Saving_Account(double int_rate = 3.0);

    ~Saving_Account();

    bool deposit(double amount);

    bool withdraw(double amount);

};


#endif //_SAVING_ACCOUNT_H
