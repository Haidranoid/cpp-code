//
// Created by Administaff on 11/30/20.
//
#include "Saving_Account_Test.h"

Saving_Account_Test::Saving_Account_Test(double int_rate)
        : int_rate{int_rate} {
}

Saving_Account_Test::~Saving_Account_Test() {
}

bool Saving_Account_Test::withdraw(double amount) {
    std::cout << "Saving Saving_Account_Test deposit called with " << amount << std::endl;
    return false;
}

bool Saving_Account_Test::deposit(double amount) {
    std::cout << "Saving Saving_Account_Test withdraw called with " << amount << std::endl;
    return false;
}