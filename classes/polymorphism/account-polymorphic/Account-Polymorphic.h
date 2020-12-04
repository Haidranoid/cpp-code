#ifndef _ACCOUNT_POLYMORPHIC_H
#define _ACCOUNT_POLYMORPHIC_H

#include <iostream>

// if a class has virtual functions
// ALWAYS provide a public virtual destructor
// if base class destructor is virtual then all derived class destructor are also virtual

class Account_Polymorphic {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account_Polymorphic::withdraw" << std::endl;
    }

    virtual ~Account_Polymorphic() {
        std::cout << "Account_Polymorphic:: destructor" << std::endl;
    }
};

#endif //_ACCOUNT_POLYMORPHIC_H
