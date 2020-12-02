//
// Created by Administaff on 11/30/20.
//
#include "Saving_Account.h"

Saving_Account::Saving_Account(double int_rate)
        : int_rate{int_rate} {

}

Saving_Account::~Saving_Account() {
}

bool Saving_Account::withdraw(double amount) {
    std::cout << "Saving Saving_Account deposit called with " << amount << std::endl;
    return false;
}

bool Saving_Account::deposit(double amount) {
    std::cout << "Saving Saving_Account withdraw called with " << amount << std::endl;
    return false;
}