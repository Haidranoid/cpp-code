#ifndef _TRUST_H
#define _TRUST_H

#include "../saving/Saving.h"

class Trust : public Saving {
private:
    static constexpr const char *def_name = "Unamed Trusted Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus = 50;
protected:
    int withdraw_counter = 1;
public:

    explicit Trust(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

    bool deposit(double amount) override;

    bool withdraw(double amount) override;

    void print(std::ostream &os) const override;

    ~Trust() override {
        std::cout << "Trust destructor" << std::endl;
    };
};


#endif //_TRUST_H
