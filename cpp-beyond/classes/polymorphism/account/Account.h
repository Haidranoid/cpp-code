#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include "../../interfaces/interface-printable/Interface_Printable.h"

class Account : public Interface_Printable {
//    friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double balance = def_balance);
    //Account2(std::string name = "Unamed Account_Test", double balance = 0.0);

    virtual bool deposit(double amount) = 0;

    virtual bool withdraw(double amount) = 0;

    void print(std::ostream &os) const override;

    ~Account() override {
        std::cout << "Account destructor" << std::endl;
    };
};


#endif //_ACCOUNT_H
