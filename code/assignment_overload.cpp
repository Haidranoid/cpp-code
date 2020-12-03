#include <iostream>
#include "../classes/polymorphism/account-test/Account_Test.h"
#include "../classes/poo/player/Player.h"
#include "../classes/poo/my-string/MyString.h"

using namespace std;

int assignment_overload() {
    // rhs ( right hand value ) [l-value]
    MyString example1{(char *) "Frank"};
    MyString peter{(char *) "Peter"};
    // same as =>
    // MyString s3{s1};
    MyString example2 = example1;  // NOT assignment
    example2 = peter;              // assignment with rhs [l-value]

    MyString example3{(char *) "Violeta"};
    example3 = MyString{(char *) "Joseph"};   // assignment with rhs [r-value]
    example3 = (char *) "Clara";                 // assignment with rhs [r-value]

    cout << example1.get_str() << " : " << example1.get_length() << endl;
    cout << example2.get_str() << " : " << example2.get_length() << endl;
    cout << example3.get_str() << " : " << example3.get_length() << endl;

    return 0;
}


