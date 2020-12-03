#include <iostream>
#include "classes/checking/Checking.h"
#include "classes/trust/Trust.h"
#include "utils/Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    /*
    // Checking
    vector<Checking> accounts;
    accounts.push_back(Checking{});
    accounts.push_back(Checking{"Larry"});
    accounts.push_back(Checking{"Moe",2000});
    accounts.push_back(Checking{"Curly",5000});

    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);

    */

    // Trust
    vector<Trust> saving_accounts;
    saving_accounts.push_back(Trust{});
    saving_accounts.push_back(Trust{"SUPERMAN"});
    saving_accounts.push_back(Trust{"Batman",1000});
    saving_accounts.push_back(Trust{"Wonderwoman",2000,5.0});

    display(saving_accounts);
    deposit(saving_accounts,2000);
    deposit(saving_accounts,1000);
    withdraw(saving_accounts,600);
    withdraw(saving_accounts,50);
    withdraw(saving_accounts,1000);
    withdraw(saving_accounts,50);
    withdraw(saving_accounts,50);

}


