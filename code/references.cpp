//
// Created by Administaff on 11/19/20.
//
#include <iostream>
#include <vector>

using namespace std;

int references() {
    int num{100};
    int &num_ref{num};

    cout << num << endl;
    cout << num_ref << endl;

    num = 200;
    cout << "\n----------------------" << endl;

    cout << num << endl;
    cout << num_ref << endl;

    num_ref = 300;
    cout << "\n----------------------" << endl;

    cout << num << endl;
    cout << num_ref << endl;

    // ---------------------------------------

    vector<string> stooges{"Larry", "Moe", "Curly"};

    for (auto str: stooges)
        str = "Funny"; // str is a COPY of the each vector element

    for (auto str: stooges)
        cout << str << endl; // No change

    cout << "\n-----------------------------" << endl;

    for (auto &str: stooges)
        str = "Funny"; // str is a REFERENCE of the each vector element

    for (auto const &str: stooges)
        cout << str << endl; // Now the vector elements have changed

    cout << endl;
    return 0;
}

