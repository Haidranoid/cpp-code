#include <iostream>
#include <string>

using namespace std;

class Test {
    int id{3};
    string name{"Mike"};
public:
    Test() = default;

//    Test(const Test &source) = default;
    Test(const Test &source) = delete;

//    Test &operator=(const Test &other) = default;
    Test &operator=(const Test &other) = delete;

    Test(int id) : id{id} {

    }

    void print() {
        cout << id << ": " << name << endl;
    }
};

int default_delete() {
    Test test;
    test.print();

    Test test1(77);
    test1.print();

/*    Test test2 = test1;
    test2 = test;*/

    return 0;
}

