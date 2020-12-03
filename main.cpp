#include <iostream>
#include "classes/account/Account.h"
#include "classes/saving/Saving.h"
#include "utils/Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe",2000});
    accounts.push_back(Account{"Curly",5000});

    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);

    // Savings
    vector<Saving> saving_accounts;
    saving_accounts.push_back(Saving{});
    saving_accounts.push_back(Saving{"SUPERMAN"});
    saving_accounts.push_back(Saving{"Batman",2000});
    saving_accounts.push_back(Saving{"Wonderwoman",5000,5.0});

    display(saving_accounts);
    deposit(saving_accounts,1000);
    withdraw(saving_accounts,2000);

}


