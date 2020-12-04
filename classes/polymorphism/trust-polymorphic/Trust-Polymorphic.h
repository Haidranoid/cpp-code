#ifndef _TRUST_POLYMORPHIC_H
#define _TRUST_POLYMORPHIC_H

#include <iostream>

class Trust_Polymorphic : public Account_Polymorphic {
public:
    // the function must be marked as virtual or override
    void withdraw(double amount) override {
        std::cout << "In Trust_Polymorphic::withdraw" << std::endl;
    }

    // the destructor must be marked as virtual or override
    ~Trust_Polymorphic() override {
        std::cout << "Trust_Polymorphic:: destructor" << std::endl;
    }
};

#endif //_TRUST_POLYMORPHIC_H
