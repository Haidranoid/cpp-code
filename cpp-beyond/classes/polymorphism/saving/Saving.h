#ifndef _SAVING_H
#define _SAVING_H

#include "../account/Account.h"

class Saving : public Account {
private:
    static constexpr const char *def_name = "Unnamed Saving Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    explicit Saving(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

    bool deposit(double amount) override;

    bool withdraw(double amount) override;

    void print(std::ostream &os) const override;

    ~Saving() override {
        std::cout << "Saving destructor" << std::endl;
    };

};


#endif //_SAVING_H
