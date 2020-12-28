#include <iostream>
#include <memory>
#include <vector>
#include <string>

using namespace std;

class Test {
    friend ostream &operator<<(ostream &os, const Test &test) {
        os << "Hello from test";
        return os;
    }

private:
    static const int SIZE = 100;
    int *buffer;
public:
    Test() {
        cout << "constructor" << endl;
        this->buffer = new int[SIZE]{};
//        this->buffer = new int[SIZE];
//        memset(buffer, 0, SIZE * sizeof(int));
    };

    Test(int i) {
        cout << "parameterized constructor" << endl;
        this->buffer = new int[SIZE]{};

        for (int i = 0; i < SIZE; i++) {
            cout << buffer[i] << endl;
        }
    }

    Test(const Test &source) {
        cout << "copy constructor" << endl;

        memcpy(this->buffer, source.buffer, SIZE * sizeof(int));
    }

    Test(Test &&source) noexcept {
        cout << "move constructor" << endl;
        this->buffer = source.buffer;
        source.buffer = nullptr;
    }

    Test &operator=(const Test &rhs) {
        if (this == &rhs)
            return *this;

        cout << "copy assignment" << endl;
        return *this;
    }

    Test &operator=(Test &&rhs) noexcept {
        cout << "move assignment" << endl;

        delete [] buffer;
        buffer = rhs.buffer;
        rhs.buffer = nullptr;

        return *this;
    }

    virtual ~Test() {
        delete[] this->buffer;
        cout << "destructor" << endl;
    };
};

Test getTest() {
    return Test();
}

void check(const Test &test) {
    cout << "lValue function!" << endl;
}

void check(Test &&test) {
    cout << "RValue function!" << endl;
}

int move_semantics() {
/*    Test test = getTest();
    cout << test << endl;

    Test &l_ref_test = test;
    Test &&r_ref_test = getTest();

    check(test);
    check(getTest());
    check(Test());*/

    vector<Test> vec;
    vec.push_back(Test());

    Test test = getTest();
    test = getTest();

    return 0;
}
