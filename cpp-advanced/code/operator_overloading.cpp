#include <iostream>
#include <string>
#include "../classes/Complex.h"

using namespace std;
using namespace numbers;

class Test {
    friend ostream &operator<<(ostream &os, const Test &test) {
        os << "{ " << test.id << " : " << test.name << " }";
        return os;
    }

private:
    int id;
    string name;
public:
    Test() : id{0}, name{""} {}

    Test(int id, const string name) : id(id), name(name) {}

    Test(const Test &source) : Test(source.id + 1, source.name) {
        cout << "copy constructor" << endl;
    }

    ~Test() = default;

    Test &operator=(const Test &rhs) {
        if (this == &rhs)
            return *this;

        this->id = rhs.id + 1;
        this->name = rhs.name;

        cout << "copy assignment" << endl;
        return *this;
    }

    Test &operator=(Test &&rhs) noexcept {
        if (this == &rhs)
            return *this;

        this->id = rhs.id;
        this->name = rhs.name;

        cout << "move assignment" << endl;
        return *this;
    }
};

int operator_overloading() {
    // ----------------------------------------------
    /*Test test{10, "Mike"};
    cout << test << endl;

    Test test1;
    test1 = test;
    cout << test1 << endl;

    test1 = Test{20, "Eduardo"};
    cout << test1 << endl;

    Test test2 = test1;
    cout << test2 << endl;*/
    // ----------------------------------------------
/*    Complex c1;
    Complex c2 = c1;

    c1 = c2;
//    cin >> c1;
    cout << c1 << " : " << c2 << endl;*/
    // ----------------------------------------------
    Complex c1(3, 4);
    Complex c2(2, 3);
    Complex c3 = c1 + c2;

    cout << c3 << endl;
    cout << c3 + c2 << endl;
    cout << c3 + 2 << endl;
    cout << 7 + c3 << endl;

    cout << boolalpha;
    cout << (c3 == c3) << endl;
    cout << (c3 == (c1 + c2)) << endl;
    cout << (c3 == c2) << endl << endl;

    cout << (c3 != c3) << endl;
    cout << (c3 != (c1 + c2)) << endl;
    cout << (c3 != c2) << endl << endl;
    // ----------------------------------------------


    return 0;
}
