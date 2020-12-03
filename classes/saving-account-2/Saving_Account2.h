#ifndef _SAVING_ACCOUNT2_H
#define _SAVING_ACCOUNT2_H

#include "../account-2/Account2.h"

class Saving_Account2 : public Account2 {
    friend std::ostream &operator<<(std::ostream &os, const Saving_Account2 &saving_account);

private:
    static constexpr const char *def_name = "Unnamed Savings Account_Test";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Saving_Account2(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

    bool deposit(double amount);
    // inherits the account-test::withdraw methods
};


#endif //_SAVING_ACCOUNT2_H
