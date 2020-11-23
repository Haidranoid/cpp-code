#include <iostream>
#include "../classes/my-string/MyString.h"

using namespace std;

int operator_overloading() {
    MyString s1{"FRANK"};
    MyString s2{"PETER"};

    MyString s3;
    MyString s4{"FRANK"};
    s3 = -s1;

    MyString stooges = s1 + " " + s2;

    MyString new_stooge;

    cout << "introduce the name of new_stooge: ";
    cin >> new_stooge;

    cout << boolalpha;
    cout << "s3 : " << s3 << endl;
    cout << "s4 == s1 ? " << (s4 == s1) << endl;
    cout << "stooges : " << stooges << endl;
    cout << new_stooge << endl;

    return 0;
}


