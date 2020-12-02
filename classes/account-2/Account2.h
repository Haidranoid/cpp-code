#ifndef _ACCOUNT_2_H
#define _ACCOUNT_2_H

#include <iostream>
#include <string>

class Account2 {
    friend std::ostream &operator<<(std::ostream &os, const Account2 &account);

private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account2(std::string name = def_name, double balance = def_balance);
    //Account2(std::string name = "Unamed Account", double balance = 0.0);

    bool deposit(double amount);

    bool withdraw(double amount);

    double get_balance() const;

};


#endif //_ACCOUNT_2_H
