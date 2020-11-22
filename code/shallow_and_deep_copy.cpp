//
// Created by Administaff on 11/20/20.
//
#include <iostream>
#include "../classes/shallow/Shallow.h"
#include "../classes/deep/Deep.h"
using namespace std;

int shallow_and_deep_copy() {
    Shallow shallow1{20};
    cout << "Shallow 1 data value: " << shallow1.get_data() << endl;
    shallow1.set_data(1000);


    Shallow shallow2{shallow1};
    cout << "Shallow 2 data value: " << shallow2.get_data() << endl;


    Deep deep1{20};
    cout << "Deep 1 data value: " << deep1.get_data() << endl;

    Deep deep2{deep1};
    cout << "Deep 2 data value: " << deep2.get_data() << endl;

    return 0;
}
