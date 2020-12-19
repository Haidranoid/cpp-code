/*#include <iostream>
#include <memory>
#include "classes/polymorphism/account/Account.h"
#include "classes/polymorphism/checking/Checking.h"
#include "classes/exceptions/illegal-balance/Illegal_Balance_Exception.h"
#include "classes/exceptions/insufficient-funds/Insufficient_Funds_Exception.h"

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

int exceptions() {
    cout << "========================================" << endl;
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
    cout << "Bye" << endl;

    try {
        unique_ptr<Account> moes_account = make_unique<Checking>("Moe", 1000.0);
        moes_account->withdraw(500);
        cout << *moes_account << endl;
        moes_account->withdraw(400);
        cout << *moes_account << endl;
        moes_account->withdraw(100); // throws exception

        cout << "======== Cleanup ==============" << endl;
    } catch (const Illegal_Balance_Exception &ex) {
        cerr << ex.what() << endl; // displays "Illegal_Balance_Exception"
    } catch (const Insufficient_Funds_Exception &ex) {
        cerr << ex.what() << endl; // displays "Insufficient_Funds_Exception"
    }

    return 0;
}

*/