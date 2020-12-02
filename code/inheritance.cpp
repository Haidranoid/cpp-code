//
// Created by Administaff on 12/1/20.
//
#include <iostream>
#include "../classes/account/Account.h"
#include "../classes/account-2/Account2.h"
#include "../classes/saving-account/Saving_Account.h"
#include "../classes/saving-account-2/Saving_Account2.h"
using namespace std;

int inheritance() {
    cout << "\n ====  Account =================================" << endl;
    Account acc{};
    acc.deposit(20000.0);
    acc.withdraw(500.0);

    cout << endl;

    Account *p_acc{nullptr};
    p_acc = new Account();

    p_acc->deposit(20000.0);
    p_acc->withdraw(500.0);

    delete p_acc;
    cout << endl;

    cout << "\n ====  Saving Account =================================" << endl;

    Saving_Account sav_acc{};
    sav_acc.deposit(20000.0);
    sav_acc.withdraw(500.0);

    cout << endl;

    Saving_Account *p_sav_acc{nullptr};
    p_sav_acc = new Saving_Account();

    p_sav_acc->deposit(20000.0);
    p_sav_acc->withdraw(500.0);

    delete p_sav_acc;
    cout << endl;



    cout << "\n ===== Account class =========" << endl;
    Account2 a1{"Eduardo",1000.0};
    cout << a1 << endl; // balance 1000

    a1.deposit(500.0); // balance 1500
    cout << a1 << endl;

    a1.withdraw(1000); // balance 500
    cout << a1 << endl;

    a1.withdraw(5000); // insufficient funds
    cout << a1 << endl; // balance 500

    cout << "\n ===== Saving Account class =========" << endl;
    Saving_Account2 s1{"Eduardo",1000.0,5.0};
    cout << s1 << endl; // balance 1000, interest rate %5

    s1.deposit(1000.0); // balance 2050, interest rate %5
    cout << s1 << endl;

    s1.withdraw(2000); // balance 50, interest rate %5
    cout << s1 << endl;

    s1.withdraw(1000); // insufficient funds
    cout << s1 << endl; // balance 50, interest rate %5


    return 0;
}

