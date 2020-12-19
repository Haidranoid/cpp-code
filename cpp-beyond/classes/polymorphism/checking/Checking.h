#ifndef _CHECKING_H
#define _CHECKING_H

#include "../account/Account.h"

class Checking : public Account {
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double fee = 1.5;
public:
    explicit Checking(std::string name = def_name, double balance = def_balance);

    bool withdraw(double amount) override;

    bool deposit(double amount) override;

    void print(std::ostream &os) const override;

    ~Checking() override {
        std::cout << "Checking destructor" << std::endl;
    };
};


#endif //_CHECKING_H
