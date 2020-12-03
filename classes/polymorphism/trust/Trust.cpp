//
// Created by Administaff on 12/3/20.
//

#include "Trust.h"
#include <iostream>

Trust::Trust(std::string name, double balance, double int_rate)
        : Saving(name, balance, int_rate) {
}

bool Trust::deposit(double amount) {
    if (amount >= 5000)
        amount += Trust::bonus;

    return Saving::deposit(amount);
}

bool Trust::withdraw(double amount) {
    if (this->withdraw_counter > 3) {
        std::cout << "You have reached the maximun number of deposit this year" << std::endl;
        return false;
    }

    if (amount > (this->balance * 0.2)) {
        std::cout << "The amount of withdraw must be more less 20% of the current balance" << std::endl;
        return false;
    }

    if (Saving::withdraw(amount)){
        this->withdraw_counter++;
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &os, const Trust &trusted_account) {
    os << "[Trusted Account -> name: " << trusted_account.name << ", balance: " << trusted_account.balance
       << ", int rate: " << trusted_account.int_rate << ", bonus: "
       << Trust::bonus << "$]";
    return os;
}
