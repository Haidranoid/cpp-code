//
// Created by Administaff on 12/3/20.
//

#include "Account.h"
#include <iostream>


Account::Account(std::string name, double balance)
        : name{name}, balance{balance} {
}

bool Account::deposit(double amount) {
    if (amount <= 0)
        return false;

    this->balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if ((this->balance - amount) >= 0) {
        this->balance -= amount;
        return true;
    }

    return false;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "[Account_Test: "<< account.name << ": " << account.balance << "]";
    return os;
}

double Account::get_balance() const {
    return this->balance;
}
