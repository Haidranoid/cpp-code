#ifndef _CHECKING_POLYMORPHIC_H
#define _CHECKING_POLYMORPHIC_H

#include <iostream>

class Checking_Polymorphic : public Account_Polymorphic {
public:
    // the function must be marked as virtual or override
    void withdraw(double amount) override {
        std::cout << "In Checking_Polymorphic::withdraw" << std::endl;
    }

    // the destructor must be marked as virtual or override
    ~Checking_Polymorphic() override  {
        std::cout << "Checking_Polymorphic:: destructor" << std::endl;
    }
};

#endif //_CHECKING_POLYMORPHIC_H
