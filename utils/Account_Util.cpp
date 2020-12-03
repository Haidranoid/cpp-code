#include "Account_Util.h"
#include <vector>
#include <iostream>

// utility helper functions for Account_Test class
void display(const std::vector<Account> &accounts) {
    std::cout << "\n ==== Accounts ================================" << std::endl;
    for (const auto &account: accounts) {
        std::cout << account << std::endl;
    }
}

void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n ==== Depositing to Accounts ================================" << std::endl;
    for (auto &account: accounts) {
        if (account.deposit(amount))
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << account << std::endl;
    }
}

void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n ==== Withdrawing to Accounts ================================" << std::endl;
    for (auto &account: accounts) {
        if (account.withdraw(amount))
            std::cout << "Withdraw " << amount << " from " << account << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << account << std::endl;
    }
}


// utility helper functions for Saving Account_Test class
void display(const std::vector<Saving> &saving_accounts) {
    std::cout << "\n ==== Saving Accounts ================================" << std::endl;
    for (const auto &saving_account: saving_accounts) {
        std::cout << saving_account << std::endl;
    }
}

void deposit(std::vector<Saving> &saving_accounts, double amount) {
    std::cout << "\n ==== Depositing to Saving Accounts ================================" << std::endl;
    for (auto &saving_account: saving_accounts) {
        if (saving_account.deposit(amount))
            std::cout << "Deposited " << amount << " to " << saving_account << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << saving_account << std::endl;
    }
}

void withdraw(std::vector<Saving> &saving_accounts, double amount) {
    std::cout << "\n ==== Withdrawing to Saving Accounts ================================" << std::endl;
    for (auto &saving_account: saving_accounts) {
        if (saving_account.withdraw(amount))
            std::cout << "Withdraw " << amount << " from " << saving_account << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << saving_account << std::endl;
    }
}