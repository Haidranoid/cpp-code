#ifndef _ACCOUNT_POLYMORPHIC_H
#define _ACCOUNT_POLYMORPHIC_H

#include <iostream>
#include "../../interfaces/interface-printable/Interface_Printable.h"
// if a class has virtual functions
// ALWAYS provide a public virtual destructor
// if base class destructor is virtual then all derived class destructor are also virtual

//class Account_Polymorphic {
class Account_Polymorphic : public Interface_Printable {
    //friend methods are not inherited, and make member method doesn't make sense [ account << cout ]
    //friend std::ostream &operator<<(std::ostream &os, const Account_Polymorphic &account);

public:
    virtual void withdraw(double amount) {
        std::cout << "In Account_Polymorphic::withdraw" << std::endl;
    }

    void print(std::ostream &os) const override {
        os << "Account_Polymorphic";
    }

    // the destructor must be marked as virtual or override, virtual for base class and override
    // for derived class

    //virtual ~Account_Polymorphic() {
    ~Account_Polymorphic() override { // when implements Interface_Printable
        std::cout << "Account_Polymorphic:: destructor" << std::endl;
    }
};

//std::ostream &operator<<(std::ostream &os, const Account_Polymorphic &account) {
//    os << "Account_Polymorphic";
//    return os;
//}

#endif //_ACCOUNT_POLYMORPHIC_H
