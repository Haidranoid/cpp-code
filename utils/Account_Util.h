//
// Created by Administaff on 12/2/20.
//

#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H

#include <vector>
#include "../classes/account/Account.h"
#include "../classes/saving/Saving.h"

// utility helper functions for Account class
void display(const std::vector<Account> &accounts);

void deposit(std::vector<Account> &accounts, double amount);

void withdraw(std::vector<Account> &accounts, double amount);

// utility helper functions for Saving class
void display(const std::vector<Saving> &saving_accounts);

void deposit(std::vector<Saving> &saving_accounts, double amount);

void withdraw(std::vector<Saving> &saving_accounts, double amount);

#endif //_ACCOUNT_UTIL_H
