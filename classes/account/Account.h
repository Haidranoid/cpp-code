#include <iostream>

#ifndef _ACCOUNT_H
#define _ACCOUNT_H

class Account {
private:
    // attributes
    std::string name;
    double balance;

public:
    // constructors
    Account(std::string name = "Default", double balance = 0);

    // copy constructor
    Account(const Account &source);

    ~Account();

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


#endif //_ACCOUNT_H
