#include "Checking.h"

Checking::Checking(std::string name, double balance)
        : Account(name, balance) {
}

bool Checking::withdraw(double amount) {
    amount += Checking::fee;
    return Account::withdraw(amount);
}

void Checking::print(std::ostream &os) const {
    os << "[Cheking Account -> name: " << this->name << ", balance: " << this->balance << ", fee: " << Checking::fee
       << "$]";
}

bool Checking::deposit(double amount) {
    return Account::deposit(amount);
}
