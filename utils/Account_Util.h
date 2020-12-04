#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H

#include "../classes/polymorphism/account/Account.h"
#include "../classes/polymorphism/saving/Saving.h"
#include "../classes/polymorphism/checking/Checking.h"
#include "../classes/polymorphism/trust/Trust.h"

// utility helper functions for Account class
void display(const std::vector<Account*> &accounts);

void deposit(std::vector<Account*> &accounts, double amount);

void withdraw(std::vector<Account*> &accounts, double amount);


#endif //_ACCOUNT_UTIL_H
