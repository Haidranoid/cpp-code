#include <iostream>
#include "classes/MyString/MyString.h"

using namespace std;

int main() {
    cout << boolalpha;

    MyString larry{"Larry"};
    MyString moe{"Moe"};
    MyString stooge = larry;

    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;

    cout << larry << endl;
    MyString larry2 = -larry;
    cout << larry2 << endl;

    MyString stooges = larry + " Moe";
    cout << stooges << endl;

    return 0;
}
