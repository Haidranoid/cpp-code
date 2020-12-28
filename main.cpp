#include <iostream>
#include <memory>
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

    Test &operator=(const Test &rhs) {
        if (this == &rhs)
            return *this;

        cout << "copy assignment" << endl;
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

int main() {
    Test test = getTest();
    cout << test << endl;

    int value = 7;


    return 0;
}
