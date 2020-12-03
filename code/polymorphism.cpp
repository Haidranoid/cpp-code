//
// Created by Administaff on 12/3/20.
//
#include <iostream>
#include <vector>

// final word at the end avoid the inheritance
class Base_Polymorphic {
public:
    // final word at the end avoid the override
    virtual void say_hello() const {
        std::cout << "Hello - i'm a Base class object" << std::endl;
    }

    virtual ~Base_Polymorphic() {};
};

class Derived_Polymorphic : public Base_Polymorphic {
public:
    void say_hello() const override {
        std::cout << "Hello - i'm a Derived class object" << std::endl;
    }

    ~Derived_Polymorphic() override {};
};


class Account_Polymorphic {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account_Polymorphic::withdraw" << std::endl;
    }

    virtual ~Account_Polymorphic() {
        std::cout << "Account_Polymorphic:: destructor" << std::endl;
    }
};

class Savings_Polymorphic : public Account_Polymorphic {
public:
    void withdraw(double amount) override {
        std::cout << "In Savings_Polymorphic::withdraw" << std::endl;
    }

    ~Savings_Polymorphic() override {
        std::cout << "Savings_Polymorphic:: destructor" << std::endl;
    }
};

class Checking_Polymorphic : public Account_Polymorphic {
public:
    void withdraw(double amount) override {
        std::cout << "In Checking_Polymorphic::withdraw" << std::endl;
    }

    ~Checking_Polymorphic() override {
        std::cout << "Checking_Polymorphic:: destructor" << std::endl;
    }
};

class Trust_Polymorphic : public Account_Polymorphic {
public:
    void withdraw(double amount) override {
        std::cout << "In Trust_Polymorphic::withdraw" << std::endl;
    }

    ~Trust_Polymorphic() override {
        std::cout << "Trust_Polymorphic:: destructor" << std::endl;
    }
};

void do_withdraw(Account_Polymorphic &account, double amount){
    account.withdraw(amount);
}

void polymorphism(){
    /*
//--------------------------------------------------------------------
Account_Polymorphic a;
Account_Polymorphic &a_ref = a;
a_ref.withdraw(1000); // in Account_Polymorphic::withdraw

Trust_Polymorphic t;
Trust_Polymorphic &t_ref = t;
t_ref.withdraw(1000); // in Trust_Polymorphic::withdraw

Account_Polymorphic a1;
Savings_Polymorphic a2;
Checking_Polymorphic a3;
Trust_Polymorphic a4;

do_withdraw(a1,1000); // in Account_Polymorphic
do_withdraw(a2,1000); // in Savings_Polymorphic
do_withdraw(a3,1000); // in Checking_Polymorphic
do_withdraw(a4,1000); // in Trust_Polymorphic


// --------------------------------------------------------------------
std::cout << "\n ========== Pointers ========== " << std::endl;

Account_Polymorphic *p1 = new Account_Polymorphic();
Account_Polymorphic *p2 = new Savings_Polymorphic();
Account_Polymorphic *p3 = new Checking_Polymorphic();
Account_Polymorphic *p4 = new Trust_Polymorphic();

p1->withdraw(1000);
p2->withdraw(1000);
p3->withdraw(1000);
p4->withdraw(1000);

std::cout << "\n ========== Array ========== " << std::endl;

Account_Polymorphic *array[] = {p1, p2, p3, p4};
for (Account_Polymorphic *a : array)
    a->withdraw(1000);


std::cout << "\n ========== Vector ========== " << std::endl;

std::vector<Account_Polymorphic *> vector{p1, p2, p3, p4};
for (Account_Polymorphic *v: vector)
    v->withdraw(1000);

std::cout << "\n ========== Cleanup ========== " << std::endl;
delete p1;
delete p2;
delete p3;
delete p4;
//--------------------------------------------------------------------

*/

}
