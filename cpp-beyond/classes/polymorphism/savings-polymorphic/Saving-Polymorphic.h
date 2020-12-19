#ifndef _SAVING_POLYMORPHIC_H
#define _SAVING_POLYMORPHIC_H

#include <iostream>
#include "../../interfaces/interface-printable/Interface_Printable.h"

class Savings_Polymorphic : public Account_Polymorphic {
    //friend methods are not inherited, and make member method doesn't make sense [ account << cout ]
    //friend std::ostream &operator<<(std::ostream &os, const Savings_Polymorphic &account);

public:
    // the function must be marked as virtual or override
    void withdraw(double amount) override {
        std::cout << "In Savings_Polymorphic::withdraw" << std::endl;
    }

    void print(std::ostream &os) const override {
        os << "Saving_Polymorphic";
    }

    // the destructor must be marked as virtual or override, virtual for base class and override
    // for derived class

    ~Savings_Polymorphic() override {
        std::cout << "Savings_Polymorphic:: destructor" << std::endl;
    }
};

//std::ostream &operator<<(std::ostream &os, const Savings_Polymorphic &account) {
//    os << "Savings_Polymorphic";
//    return os;
//}

#endif //_SAVING_POLYMORPHIC_H
