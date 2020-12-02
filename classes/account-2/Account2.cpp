//
// Created by Administaff on 12/2/20.
//

#include "Account2.h"
#include <iostream>


Account2::Account2(std::string name, double balance)
        : name{name}, balance{balance} {
}

bool Account2::deposit(double amount) {
    if (amount <= 0)
        return false;

    this->balance += amount;
    return true;
}

bool Account2::withdraw(double amount) {
    if ((this->balance - amount) >= 0) {
        this->balance -= amount;
        return true;
    }

    return false;
}

std::ostream &operator<<(std::ostream &os, const Account2 &account) {
    os << "[Account: "<< account.name << ": " << account.balance << "]";
    return os;
}

double Account2::get_balance() const {
    return this->balance;
}

