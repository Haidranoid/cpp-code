#include "Account.h"

Account::Account() = default;

Account::~Account() = default;

Account::Account(char *name, double balance) : name{name}, balance{balance} {
}

Account::Account(char *name) : name{name} {
}

Account::Account(double balance) : balance{balance} {
}

bool Account::withdraw(double amount) {
    if (amount > this->balance) {
        std::cout << "there is no sufficient founds" << std::endl;
        return false;
    } else {
        this->balance -= amount;
        return true;
    }
}

void Account::deposit(double amount) {
    this->balance += amount;
}