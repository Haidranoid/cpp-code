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

    if (Saving::withdraw(amount)) {
        this->withdraw_counter++;
        return true;
    }
    return false;
}

void Trust::print(std::ostream &os) const {
    os << "[Trusted Account -> name: " << this->name << ", balance: " << this->balance
       << ", int rate: " << this->int_rate << ", bonus: "
       << Trust::bonus << "$]";
}
