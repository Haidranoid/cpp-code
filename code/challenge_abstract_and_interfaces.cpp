#include <iostream>
#include <vector>

#include "../classes/polymorphism/account/Account.h"
#include "../classes/polymorphism/checking/Checking.h"
#include "../classes/polymorphism/saving/Saving.h"
#include "../classes/polymorphism/trust/Trust.h"

#include "../utils/Account_Util.h"

using namespace std;

int chalenge_astract_and_interfaces() {
//    Account joe;
/*    Checking c;

    cout << c << endl;

    Saving s{"Frank", 5000, 2.6};
    cout << s << endl;
    s.deposit(10000);
    cout << s << endl;
    s.withdraw(10000);
    cout << s << endl;

    Trust t{"Leo", 10000, 2.6};

    Account *ptr = new Trust("Leo", 10000, 2.6);
    cout << *ptr << endl;
    delete ptr;*/


    Account *p1 = new Checking{"Larry", 10000};
    Account *p2 = new Saving{"Moe", 1000};
    Account *p3 = new Trust{"Curly"};


    std::vector<Account *> accounts{p1, p2, p3};

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    display(accounts);


    cout << "======================= Cleanup =======================" << endl;
    delete p3;
    delete p2;
    delete p1;


    return 0;
}


