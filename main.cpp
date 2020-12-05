#include <iostream>
#include <vector>
#include <memory>

#include "classes/polymorphism/account/Account.h"
#include "classes/polymorphism/checking/Checking.h"
#include "classes/polymorphism/saving/Saving.h"
#include "classes/polymorphism/trust/Trust.h"

class Test {
private:
    int data;
public:
    Test() : data{0} {
        std::cout << "Test constructor {" << data << "}" << std::endl;
    }

    Test(int data) : data{data} {
        std::cout << "Test constructor {" << data << "}" << std::endl;
    }

    int get_data() const {
        return this->data;
    }

    ~Test() {
        std::cout << "Test destructor {" << data << "}" << std::endl;
    }
};


int main() {
//    Test t1{1000};
//
//    Test *t1 = new Test{1000};
//    delete t1;
//
//    std::unique_ptr<Test> t1{new Test{1000}};
//
//    std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);
//
//    std::unique_ptr<Test> t3;
//
//    //t3 = t1;
//    t3 = std::move(t1);
//
//    if (!t1)
//        std::cout << "t1 is nullptr" << std::endl;


//    std::unique_ptr<Account> a1 = std::make_unique<Checking>("Moe", 5000);
//    std::cout << *a1 << std::endl;
//
//    a1->deposit(5000);
//
//    std::cout << *a1 << std::endl;
//

    std::vector<std::unique_ptr<Account>> accounts;

    accounts.push_back(std::make_unique<Checking>("James", 1000));
    accounts.push_back(std::make_unique<Saving>("Billy", 4000, 5.2));
    accounts.push_back(std::make_unique<Trust>("Bobby", 1000, 4.5));

    for (const std::unique_ptr<Account> &acc:accounts)
        std::cout << *acc << std::endl;

    std::cout << "======== Cleanup ========" << std::endl;


    return 0;
}


