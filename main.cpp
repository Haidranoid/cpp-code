#include <iostream>

#include "classes/polymorphism/account/Account.h"
#include "classes/polymorphism/checking/Checking.h"
#include "classes/polymorphism/saving/Saving.h"
#include "classes/polymorphism/trust/Trust.h"

using namespace std;

int main() {
//    Account joe;
    Checking c;

    cout << c << endl;

    Saving s{"Frank",5000,2.6};
    cout << s << endl;
    s.deposit(10000);
    cout << s << endl;
    s.withdraw(10000);
    cout << s << endl;

    Account *ptr = new Trust("Leo",10000,2.6);
    cout << *ptr << endl;


    cout << "======================= Cleanup =======================" << endl;
    delete ptr;


    return 0;
}


