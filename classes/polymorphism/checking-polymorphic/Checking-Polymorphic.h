#ifndef _CHECKING_POLYMORPHIC_H
#define _CHECKING_POLYMORPHIC_H

#include <iostream>
#include "../../interfaces/interface-printable/Interface_Printable.h"

class Checking_Polymorphic : public Account_Polymorphic {
    //friend methods are not inherited, and make member method doesn't make sense [ account << cout ]
    //friend std::ostream &operator<<(std::ostream &os, const Checking_Polymorphic &account);

public:
    // the function must be marked as virtual or override
    void withdraw(double amount) override {
        std::cout << "In Checking_Polymorphic::withdraw" << std::endl;
    }

    void print(std::ostream &os) const override {
        os << "Checking_Polymorphic";
    }

    // the destructor must be marked as virtual or override, virtual for base class and override
    // for derived class

    ~Checking_Polymorphic() override {
        std::cout << "Checking_Polymorphic:: destructor" << std::endl;
    }
};

//std::ostream &operator<<(std::ostream &os, const Checking_Polymorphic &account) {
//    os << "Checking_Polymorphic";
//    return os;
//}

#endif //_CHECKING_POLYMORPHIC_H
