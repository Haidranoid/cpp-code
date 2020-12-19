#include "Saving.h"

Saving::Saving(std::string name, double balance, double int_rate)
        : Account(name, balance), int_rate{int_rate} {
}

bool Saving::deposit(double amount) {
    amount = amount + (amount * this->int_rate / 100);
    return Account::deposit(amount);
}

bool Saving::withdraw(double amount) {
    return Account::withdraw(amount);
}

void Saving::print(std::ostream &os) const {
    os << "[Saving Account: " << this->name << ": " << this->balance << ", " << this->int_rate << "%]";
}
