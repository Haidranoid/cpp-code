//
// Created by Administaff on 12/3/20.
//

#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <string>

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);

private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double balance = def_balance);
    //Account2(std::string name = "Unamed Account_Test", double balance = 0.0);

    bool deposit(double amount);

    bool withdraw(double amount);

    double get_balance() const;

};


#endif //_ACCOUNT_H
