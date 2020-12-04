#include <vector>
#include <iostream>

/*
#include "../classes/polymorphism/account-polymorphic/Account-Polymorphic.h"
#include "../classes/polymorphism/savings-polymorphic/Saving-Polymorphic.h"
#include "../classes/polymorphism/checking-polymorphic/Checking-Polymorphic.h"
#include "../classes/polymorphism/trust-polymorphic/Trust-Polymorphic.h"
void do_withdraw(Account_Polymorphic &account, double amount) {
    account.withdraw(amount);
}

void polymorphism() {
    //--------------------------------------------------------------------
    Account_Polymorphic a;
    Account_Polymorphic &a_ref = a;
    a_ref.withdraw(1000); // in Account_Polymorphic::withdraw

    Trust_Polymorphic t;
    Trust_Polymorphic &t_ref = t;
    t_ref.withdraw(1000); // in Trust_Polymorphic::withdraw

    Account_Polymorphic a1;
    Savings_Polymorphic a2;
    Checking_Polymorphic a3;
    Trust_Polymorphic a4;

    do_withdraw(a1, 1000); // in Account_Polymorphic
    do_withdraw(a2, 1000); // in Savings_Polymorphic
    do_withdraw(a3, 1000); // in Checking_Polymorphic
    do_withdraw(a4, 1000); // in Trust_Polymorphic


// --------------------------------------------------------------------
    std::cout << "\n ========== Pointers ========== " << std::endl;

    Account_Polymorphic *p1 = new Account_Polymorphic();
    Account_Polymorphic *p2 = new Savings_Polymorphic();
    Account_Polymorphic *p3 = new Checking_Polymorphic();
    Account_Polymorphic *p4 = new Trust_Polymorphic();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout << "\n ========== Array ========== " << std::endl;

    Account_Polymorphic *array[] = {p1, p2, p3, p4};
    for (Account_Polymorphic *a : array)
        a->withdraw(1000);


    std::cout << "\n ========== Vector ========== " << std::endl;

    std::vector<Account_Polymorphic *> vector{p1, p2, p3, p4};
    for (Account_Polymorphic *v: vector)
        v->withdraw(1000);

    std::cout << "\n ========== Cleanup ========== " << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    //--------------------------------------------------------------------
}
*/