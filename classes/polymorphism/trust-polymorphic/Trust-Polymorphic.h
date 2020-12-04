#ifndef _TRUST_POLYMORPHIC_H
#define _TRUST_POLYMORPHIC_H

#include <iostream>
#include "../../interfaces/interface-printable/Interface_Printable.h"

class Trust_Polymorphic : public Account_Polymorphic {
    //friend methods are not inherited, and make member method doesn't make sense [ account << cout ]
    //friend std::ostream &operator<<(std::ostream &os, const Trust_Polymorphic &account);

public:
    // the function must be marked as virtual or override
    void withdraw(double amount) override {
        std::cout << "In Trust_Polymorphic::withdraw" << std::endl;
    }

    void print(std::ostream &os) const override {
        os << "Trust_Polymorphic";
    };

    // the destructor must be marked as virtual or override, virtual for base class and override
    // for derived class

    ~Trust_Polymorphic() override {
        std::cout << "Trust_Polymorphic:: destructor" << std::endl;
    }
};

//std::ostream &operator<<(std::ostream &os, const Trust_Polymorphic &account) {
//    os << "Trust_Polymorphic";
//    return os;
//}

#endif //_TRUST_POLYMORPHIC_H
