#include <iostream>
#include "../classes/poo/my-string/MyString.h"

using namespace std;

int challenge_operator_overloading() {
    cout << boolalpha;

    MyString s1{"Joseph Edward"};
    MyString s2{"Jose Eduardo"};
    cout << "s1 == s2 ? " << (s1 == s2) << endl;
    cout << "s1 != s2 ? " << (s1 != s2) << endl;

    MyString s3 = s1;
    cout << "s1 == s3 ? " << (s1 == s3) << endl;
    cout << "s1 != s3 ? " << (s1 != s3) << endl;

    cout << "s1 < s2 ? " << (s1 < s2) << endl;
    cout << "s2 < s1 ? " << (s2 < s1) << endl;

    cout << "s1 > s2 ? " << (s1 > s2) << endl;
    cout << "s2 > s1 ? " << (s2 > s1) << endl;

    MyString s4 = s1 + " " + s2;
    cout << "s4: " << s4 << endl;


    MyString s5{"Hello, "};
    s5 += s1;
    cout << "s5+=: " << s5 << endl;


    MyString s6{"Times1|"};
    s6 = s6 * 2;
    cout << "s6: " << s6 << endl;


    MyString s7{"Times3|"};
    s7 *= 5;
    cout << "s7*=: " << s7 << endl;


    MyString s8{"Frank"};
    cout << "++s8: " << ++s8 << endl;
    s8 = -s8;
    cout << "-s8: " << s8 << endl;

    cout << "s8++: " << s8++ << endl;
    cout << "s8: " << s8 << endl;

    return 0;
}


