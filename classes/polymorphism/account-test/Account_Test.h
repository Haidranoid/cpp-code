#include <iostream>

#ifndef _ACCOUNT_TEST_H
#define _ACCOUNT_TEST_H

class Account_Test {
private:
    // attributes
    std::string name;
    double balance;

public:
    // constructors
    Account_Test(std::string name = "Default", double balance = 0);

    // copy constructor
    Account_Test(const Account_Test &source);

    ~Account_Test();

    // getters and setters
    std::string get_name() const;

    void set_name(std::string name);

    double getBalance() const;

    void setBalance(double balance);

    // methods
    bool deposit(double amount);

    bool withdraw(double amount);

    // friend method
    // friend void display_player(Player &player);
};


#endif //_ACCOUNT_TEST_H
