#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Test {
private:
    int one{1};
    int two{2};
public:
    void run() {
        int three{3};
        int four{4};

        // this default captured by reference
        auto ptr_lambda = [this, three, four]() {
            one = 111;
            cout << this->one << endl;
            cout << this->two << endl;
            cout << three << endl;
            cout << four << endl;
        };

        ptr_lambda();
    }
};

// passing function as parameter
void test(void (*f)()) {
    f();
}

void lambda_introduction() {
    void (*func_1)() = []() {
        cout << "hello" << endl;
    };

    auto func = []() { cout << "hello" << endl; };

    func();

    test(func);

    test([]() { cout << "hello lambda" << endl; });
}

void test_greet(void (*greet)(string)) {
    greet("Jose Eduardo");
}

void run_divide(double (*divide)(double, double)) {
    cout << divide(9.0, 3.0) << endl;
}

void lambda_parameters_return_types() {
    auto ptr_greet = [](string name) {
        cout << "Hello " << name << endl;
    };

    ptr_greet("Eduardo");
    test_greet(ptr_greet);

//    auto ptr_divide = [](double a, double b) -> decltype(a / b) {
    auto ptr_divide = [](double a, double b) -> double {
        if (b == 0)
            return 0;

        return a / b;
    };

    cout << ptr_divide(10, 5.0) << endl;
    cout << ptr_divide(10, 0) << endl;

    run_divide(ptr_divide);
}

void lambda_capture_variables() {
    int one = 1;
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
        two = 8;
        three = 7;
        cout << one << ", " << two << endl;
    }();
    cout << two << endl;

    // Default capture all local variables by reference, but two and three by value
    [&, two, three]() {
        one = 100;
        cout << one << ", " << two << endl;
    }();
    cout << one << endl;
}

void lambda_capture_this() {
    Test test1;
    test1.run();
}

bool check(string text) {
    return text.size() == 3;
}

class Check {
public:
    bool operator()(string text) {
        return text.size() == 5;
    }
} check1;

void run(function<bool(string)> check) {
    string test = "dog";
    cout << check(test) << endl;
}

void standard_function_type() {
    int size = 5;
    vector<string> vec{"one", "two", "three"};

    // using lambda
    auto lambda = [size](string text) {
        return text.size() == size;
    };
    int count1 = count_if(vec.begin(), vec.end(), lambda);

    // using function pointer
    bool (*ptr_function)(string) = check;
    int count2 = count_if(vec.begin(), vec.end(), ptr_function);

    // using functor
    Check check2;
    int count3 = count_if(vec.begin(), vec.end(), check2);

    cout << count1 << endl;
    cout << count2 << endl;
    cout << count3 << endl << endl;

    run(lambda);
    run(ptr_function);
    run(check2);

    function<double(double, double)> add = [](double a, double b) -> double {
        return a + b;
    };

    cout << add(5.8, 2.2) << endl;

}

void lambda_mutable() {
    int cats = 5;

    [cats]() mutable -> void {
        cats = 10;
        cout << cats << endl;
    }();
    cout << cats << endl;
}

int lambdas() {
//    lambda_introduction();
//    lambda_parameters_return_types();
//    lambda_capture_variables();
//    lambda_capture_this();
//    standard_function_type();
    lambda_mutable();
    return 0;
}
