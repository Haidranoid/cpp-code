#include "Checking.h"

Checking::Checking(std::string name, double balance)
        : Account(name, balance) {
}

bool Checking::withdraw(double amount) {
    amount += Checking::fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking &checking_account) {
    os << "[Cheking Account -> name: " << checking_account.name << ", balance: " << checking_account.balance << ", fee: "
       << Checking::fee << "$]";
    return os;
}
