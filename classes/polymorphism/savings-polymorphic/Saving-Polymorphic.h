#ifndef _SAVING_POLYMORPHIC_H
#define _SAVING_POLYMORPHIC_H

#include <iostream>

class Savings_Polymorphic : public Account_Polymorphic {
public:
    // the function must be marked as virtual or override
    void withdraw(double amount) override {
        std::cout << "In Savings_Polymorphic::withdraw" << std::endl;
    }

    // the destructor must be marked as virtual or override
    ~Savings_Polymorphic() override {
        std::cout << "Savings_Polymorphic:: destructor" << std::endl;
    }
};

#endif //_SAVING_POLYMORPHIC_H
