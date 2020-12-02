#include "Saving_Account2.h"

Saving_Account2::Saving_Account2(std::string name, double balance, double int_rate)
        : Account2(name, balance), int_rate{int_rate} {

}

bool Saving_Account2::deposit(double amount) {
    amount = amount + (amount * this->int_rate / 100);
    return Account2::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Saving_Account2 &saving_account) {
    os << "[Saving Account: " << saving_account.name << ": " << saving_account.balance << ", " << saving_account.int_rate << "%]";
    return os;
}
