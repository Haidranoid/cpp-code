#include <iostream>
#include "classes/my-string/MyString.h"

using namespace std;

int main() {
    MyString s1{"FRANK"};
    MyString s2{"PETER"};

    MyString s3;
    MyString s4{"FRANK"};
    s3 = -s1;
    
    MyString stooges = s1 + " " + s2;

    cout << boolalpha;
    cout << "s3 : " << s3.get_str() << endl;
    cout << "s4 == s1 ? " << (s4 == s1) << endl;
    cout << "stooges : " << stooges.get_str() << endl;

    return 0;
}


