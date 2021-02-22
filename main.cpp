#include <iostream>
#include "classes/MyString/MyString.h"

using namespace std;

int main() {
    MyString s1 {"Hello"};
    MyString s2;
    s2 = s1;

    cout << s2.get_str() << endl;

    s2 = "this is a test";

    cout << s2.get_str() << endl;

    return 0;
}
