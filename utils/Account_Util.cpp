#include "../classes/polymorphism/account/Account.h"
#include <vector>

// utility helper functions for Account_Test class
void display(const std::vector<Account *> &accounts) {
    std::cout << "\n ==== Accounts ================================" << std::endl;
    for (Account *account: accounts) {
        std::cout << *account << std::endl;
    }
}

void deposit(std::vector<Account *> &accounts, double amount) {
    std::cout << "\n ==== Depositing to Accounts ================================" << std::endl;
    for (Account *account: accounts) {
        if (account->deposit(amount))
            std::cout << "Deposited " << amount << " to " << *account << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << *account << std::endl;
    }
}

void withdraw(std::vector<Account *> &accounts, double amount) {
    std::cout << "\n ==== Withdrawing to Accounts ================================" << std::endl;
    for (Account *account: accounts) {
        if (account->withdraw(amount))
            std::cout << "Withdraw " << amount << " from " << *account << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *account << std::endl;
    }
}