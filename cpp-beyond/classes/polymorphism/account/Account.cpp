#include "Account.h"
#include "../../exceptions/illegal-balance/Illegal_Balance_Exception.h"
#include "../../exceptions/insufficient-funds/Insufficient_Funds_Exception.h"

Account::Account(std::string name, double balance)
        : name{name}, balance{balance} {
    if (balance < 0.0)
        throw Illegal_Balance_Exception();
}

bool Account::deposit(double amount) {
    if (amount <= 0)
        return false;

    this->balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if ((this->balance - amount) < 0)
        throw Insufficient_Funds_Exception();

    this->balance -= amount;
    return true;
}

void Account::print(std::ostream &os) const {
    os << "[Account_Test: " << this->name << ": " << this->balance << "]";
}

/*
std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "[Account_Test: "<< account.name << ": " << account.balance << "]";
    return os;
}
*/
