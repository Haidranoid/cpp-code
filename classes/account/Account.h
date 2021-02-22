#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

class Account {
private:
    char *name{};
    double balance{};
public:

    Account();

    ~Account();

    Account(char *name, double balance);

    Account(char *name);

    Account(double balance);

    bool withdraw(double amount);

    void deposit(double amount);
};


#endif //ACCOUNT_H
