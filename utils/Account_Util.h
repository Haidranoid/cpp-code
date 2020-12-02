//
// Created by Administaff on 12/2/20.
//

#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H

#include <vector>
#include "../classes/account-2/Account2.h"
#include "../classes/saving-account-2/Saving_Account2.h"

// utility helper functions for Account class
void display(const std::vector<Account2> &accounts);

void deposit(std::vector<Account2> &accounts, double amount);

void withdraw(std::vector<Account2> &accounts, double amount);

// utility helper functions for Saving Account class
void display(const std::vector<Saving_Account2> &saving_accounts);

void deposit(std::vector<Saving_Account2> &saving_accounts, double amount);

void withdraw(std::vector<Saving_Account2> &saving_accounts, double amount);

#endif //_ACCOUNT_UTIL_H
