#include <iostream>
#include <memory>
#include "classes/polymorphism/account/Account.h"
#include "classes/polymorphism/checking/Checking.h"
#include "classes/exceptions/illegal-balance/Illegal_Balance_Exception.h"

using namespace std;

class DivideByZeroException {
};

class NegativeValueException {
};


double calculate_mpg(int miles, int gallons) {
    if (gallons == 0)
        throw DivideByZeroException();
    if (miles < 0 || gallons < 0)
        throw NegativeValueException();

    //throw "Unknown exception";

    return (double) miles / gallons;
}

int main() {
/*    cout << "========================================" << endl;
    int miles{};
    int gallons{};
    double miles_per_gallon{};

    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;


    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallon << endl;
    } catch (DivideByZeroException &ex) {
        cerr << "Sorry, can't divide by zero" << endl;
    } catch (NegativeValueException &ex) {
        cerr << "Sorry, one of your parameters is negative" << endl;
    } catch (...) {
        cerr << "Unknown exception" << endl;
    }
    cout << "Bye" << endl;*/

    cout << "========================================" << endl;
    try {
        unique_ptr<Account> moes_account = make_unique<Checking>("Moe", 100.0);

        cout << *moes_account << endl;
        cout << "Program completed successfully" << endl << endl;
    } catch (const Illegal_Balance_Exception &ex) {
        cerr << ex.what() << endl; // displays "Illegal balance exception"
    }

    cout << "========================================" << endl;
    return 0;
}

