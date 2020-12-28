#include <iostream>

using namespace std;

struct Test {
};

void check_value(Test &test) {
    cout << "lvalue" << endl;
}

void check_value(Test &&test) {
    cout << "rvalue" << endl;
}

template<typename T>
void call(T &&arg) {
    check_value(forward<T>(arg));
}

int perfect_forwarding() {
    Test test;

    call(test);
    call(Test());

    return 0;
}
