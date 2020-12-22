/*
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

// function pointers
void testGreet(string name, void (*greet)(string)) {
    greet(name);
}

void runDivide(double a, double b, double (*divide)(double, double)) {
    cout << divide(a, b) << endl;
}

// normal function
bool check(string &test) {
    return test.size() == 3;
}

// functor
class Check {
public:
    bool operator()(string &test) {
        return test.size() == 5;
    }
} check1;

void run(function<bool(string &)> check) {
    string test = "dog";
    cout << check(test) << endl;
}

int main() {

    // lambda expressions -----------------------------------
*/
/*    auto pGreet = [](string name) -> void {
        cout << "Hello " << name << endl;
    };
    pGreet("Mike");

    testGreet("Pedro", pGreet);

    auto pDivide = [](double a, double b) -> double {
        if (b == 0.0) {
            return 0;
        }
        return a / b;
    };
    cout << pDivide << endl;

    cout << pDivide(10.0, 5.0) << endl;
    cout << pDivide(10.0, 0) << endl;

    runDivide(9, 3, pDivide);*//*




    // lambda capture expressions ------------------------------
    */
/*int one = 1;
    int two = 2;
    int three = 3;

    // capture one and two by value
    [one, two]() {
        cout << one << ", " << two << endl;
    }();

    // capture all local variables by value
    [=]() {
        cout << one << ", " << two << endl;
    }();

    // Default capture all local variables by value, but capture three by reference
    [=, &three]() {
        three = 7;
        cout << one << ", " << two << endl;
    }();
    cout << three << endl;

    // Default capture all local variables by reference
    [&]() {
        three = 7;
        two = 8;
        cout << one << ", " << two << endl;
    }();
    cout << two << endl;

    // Default capture all local variables by reference, but two and three by value
    [&, two, three]() {
        one = 100;
        cout << one << ", " << two << endl;
    }();
    cout << one << endl;*//*


    // standard function type ------------------------------

*/
/*    int size = 5;
    vector<string> vec{"one", "two", "three"};

    auto lambda = [size](string test) {
        return test.size() == size;
    };

    int count = count_if(vec.begin(), vec.end(), lambda);
    cout << count << endl;

    count = count_if(vec.begin(), vec.end(), check);
    cout << count << endl;

    count = count_if(vec.begin(), vec.end(), check1);
    cout << count << endl;

    run(lambda);
    run(check1);
    run(check);

    function<int(int,int)> add = [](int one,int two){
        return one + two;
    };
    cout << add(7, 3) << endl;*//*


    // mutable lambdas ------------------------------
    int cats = 5;

    [cats]() mutable {
        cats = 8;
        cout << cats << endl;
    }();

    cout << cats << endl;

    return 0;
}
*/
