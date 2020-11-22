//
// Created by Administaff on 11/19/20.
//
int left_and_right_values() {
    /*

    l-values
    Values that have names and are addressable
    modifiable if they are not constants

    int x{100};  // x is an l-value
    x = 1000;
    x = 1000 + 20;

    string name; // name is an l-value
    name = "Frank";

    100 = x;  // 100 is NOT an l-value
    (1000 + 20) = x;  // (1000 + 20) is NOT an l-value
    "Frank" = name;  // "Frank" is NOT an l-value


     l-value references
     The references we've used are l-value references because
     we are referencing l-values

     int x{100};
     int &ref1 = x; // ref1 is reference to l-value
     ref1 = 1000;

     int &ref2 = 100; // Error 100 is an r-value


    //-----------------------------------------------------------

    r-values
    A value that's not an l-value
    On the right-hand side of an assignment expression
    a literal
    a temporary which is intended to be non-modifiable


    int x{100};  // 100 is an r-value
    int y = x + 200;  // (x + 200) is an r-value

    string name;
    name = "Frank"; // "Frank" is an r-value

    int max_num = max(20,30); // max(20,30) is an r-value


    r-value references
    The references we've used are l-value references because
    we are referencing l-values

    int x{100};
    int &ref1 = x; // ref1 is reference to l-value
    ref1 = 1000;

    int &ref2 = 100; // Error 100 is an r-value


     //-----------------------------------------------------------
     Pass by reference

     int square(int &n){
        return n * n;
     }

     int num{10};

     square(num); // OK
     square(5); // Error - can't reference r-value 5


    */


    return 0;
}

