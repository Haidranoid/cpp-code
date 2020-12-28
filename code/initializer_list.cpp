#include <iostream>
#include <initializer_list>
#include <string>
#include <vector>

using namespace std;

template<class T>
class Test {
public:
    Test(initializer_list<T> texts) {
        for (auto value:texts) {
            cout << value << endl;
        }
    }

    void print(initializer_list<T> list) {
        for (auto value:list) {
            cout << value << endl;
        }
    }
};

int initializer_lists() {
    vector<int> numbers{1, 3, 4, 5};
    cout << numbers[2] << endl;

    Test<string> test{"apple", "orange", "banana"};
    test.print({"one","two","three","four"});

    return 0;
}
