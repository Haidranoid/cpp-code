//
// Created by Administaff on 12/2/20.
//

#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H

#include <vector>
#include "../classes/account/Account.h"
#include "../classes/saving/Saving.h"
#include "../classes/checking/Checking.h"
#include "../classes/trust/Trust.h"

// utility helper functions for Account class
void display(const std::vector<Account> &accounts);

void deposit(std::vector<Account> &accounts, double amount);

void withdraw(std::vector<Account> &accounts, double amount);

// utility helper functions for Saving class
void display(const std::vector<Saving> &saving_accounts);

void deposit(std::vector<Saving> &saving_accounts, double amount);

void withdraw(std::vector<Saving> &saving_accounts, double amount);

// utility helper functions for Checking class
void display(const std::vector<Checking> &checking_accounts);

void deposit(std::vector<Checking> &checking_accounts, double amount);

void withdraw(std::vector<Checking> &checking_accounts, double amount);

// utility helper functions for Checking class
void display(const std::vector<Trust> &trusted_accounts);

void deposit(std::vector<Trust> &trusted_accounts, double amount);

void withdraw(std::vector<Trust> &trusted_accounts, double amount);


#endif //_ACCOUNT_UTIL_H
