#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H

#include "../../cpp-beyond/classes/polymorphism/account/Account.h"
#include "../../cpp-beyond/classes/polymorphism/saving/Saving.h"
#include "../../cpp-beyond/classes/polymorphism/checking/Checking.h"
#include "../../cpp-beyond/classes/polymorphism/trust/Trust.h"

// utility helper functions for Account class
void display(const std::vector<Account*> &accounts);

void deposit(std::vector<Account*> &accounts, double amount);

void withdraw(std::vector<Account*> &accounts, double amount);


#endif //_ACCOUNT_UTIL_H
