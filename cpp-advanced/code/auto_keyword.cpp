#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>
#include <string>

using namespace std;

void typeinfo() {
    string variable;
    cout << typeid(variable).name() << endl;

    decltype(variable) name = "Bob";
    cout << name << endl;
}

template<typename T, typename S>
auto test(T value1, S value2) -> decltype(value1 + value2) {
    return value1 + value2;
}

int get() {
    return 999;
}

auto test2() -> decltype(get()) {
    return get();
}

void auto_keyword() {
    auto value = 7;
    auto text = "Hello";

    cout << test(5, 233.3) << endl;
    cout << test2() << endl;
}

void range_based_loop() {
    auto texts = {"one", "two", "three"};

    for (auto i: texts) {
        cout << i << endl;
    }

    vector<int> numbers{
            1, 2, 3, 4, 5, 6, 7, 8
    };
    for (auto i:numbers) {
        cout << i << endl;
    }

    string hello = "Hello";
    for (auto c:hello) {
        cout << c << endl;
    }
}

int auto_keywork() {
//    typeinfo();
//    auto_keyword();
    range_based_loop();
    return 0;
}
