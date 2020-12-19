//
// Created by Administaff on 11/18/20.
//

#include <iostream>

using namespace std;

int const_and_pointers() {

    int high_score_1{100};
    int low_score_1{65};

    // DATA constant
    const int *score_ptr{&high_score_1};

    //*score_ptr = 86; // ERROR
    score_ptr = &low_score_1; // OK


    // ---------------------------------------

    int high_score_2{100};
    int low_score_2{65};

    // POINTER constant
    int *const score_ptr_2{&high_score_2};

    *score_ptr_2 = 86; // OK
    //score_ptr_2 = &low_score_2; // ERROR

    // ---------------------------------------


    int high_score_3{100};
    int low_score_3{65};

    // DATA and POINTER constant
    const int *const score_ptr_3{&high_score_3};

    //*score_ptr_3 = 86; // ERROR
    //score_ptr_3 = &low_score_3; // ERROR

    return 0;
}

