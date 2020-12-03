#include "Saving.h"
#include <iostream>

Saving::Saving(std::string name, double balance, double int_rate)
        : Account(name, balance), int_rate{int_rate} {
}

bool Saving::deposit(double amount) {
    amount = amount + (amount * this->int_rate / 100);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Saving &saving_account) {
    os << "[Saving Account: " << saving_account.name << ": " << saving_account.balance << ", " << saving_account.int_rate << "%]";
    return os;
}
