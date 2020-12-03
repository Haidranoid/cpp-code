//
// Created by Administaff on 11/30/20.
//

#ifndef _SAVING_ACCOUNT_TEST_H
#define _SAVING_ACCOUNT_TEST_H

#include "../account-test/Account_Test.h"

class Saving_Account_Test : public Account_Test {
private:
    double int_rate;
public:
    Saving_Account_Test(double int_rate = 3.0);

    ~Saving_Account_Test();

    bool deposit(double amount);

    bool withdraw(double amount);

};


#endif //_SAVING_ACCOUNT_TEST_H
