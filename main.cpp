#include <iostream>
#include <vector>

#include "classes/polymorphism/account-polymorphic/Account-Polymorphic.h"
#include "classes/polymorphism/checking-polymorphic/Checking-Polymorphic.h"
#include "classes/polymorphism/savings-polymorphic/Saving-Polymorphic.h"
#include "classes/polymorphism/trust-polymorphic/Trust-Polymorphic.h"

using namespace std;

int main() {
/*    cout << " =======  No pointers ==========" << endl;

    Account_Polymorphic a;
    std::cout << a << std::endl;

    Checking_Polymorphic c;
    std::cout << c << std::endl;

    Savings_Polymorphic s;
    std::cout << s << std::endl;

    Trust_Polymorphic t;
    std::cout << t << std::endl;*/

    cout << " =======  Pointers ==========" << endl;
    Account_Polymorphic *a_ptr = new Account_Polymorphic;
    std::cout << *a_ptr << std::endl;

    Account_Polymorphic *c_ptr = new Savings_Polymorphic;
    std::cout << *c_ptr << std::endl;

    Account_Polymorphic *s_ptr = new Checking_Polymorphic;
    std::cout << *s_ptr << std::endl;

    Account_Polymorphic *t_ptr = new Trust_Polymorphic;
    std::cout << *t_ptr << std::endl;

    cout << " =======  Cleanup ==========" << endl;

    delete t_ptr;
    delete s_ptr;
    delete c_ptr;
    delete a_ptr;


    return 0;
}


