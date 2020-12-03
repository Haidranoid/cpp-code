//
// Created by Administaff on 11/20/20.
//
#include <iostream>
#include "Account_Test.h"

using namespace std;

// constructors and destructor --------------------------
Account_Test::Account_Test(std::string name, double balance)
        : name{name}, balance{balance} {
    cout << "Three-args constructor called" << endl;
    //this->name = name;
    //this->balance = balance;
}

// copy constructor
Account_Test::Account_Test(const Account_Test &source)
        : name{source.name}, balance{source.balance} {
    cout << "Copy constructor called from: " << source.name << endl;
}

Account_Test::~Account_Test() {
    cout << "Destructor called for: " << this->name << endl;
}

// getters and setters -----------------------------------
string Account_Test::get_name() const {
    return this->name;
}

void Account_Test::set_name(std::string name) {
    this->name = name;
}

double Account_Test::getBalance() const {
    return this->balance;
}

void Account_Test::setBalance(double balance) {
    this->balance = balance;
}

// methods -------------------------------------------------
bool Account_Test::withdraw(double amount) {
    this->balance -= amount;
    // cout << "In deposit: " << this->balance << endl;
    cout << "Saving Account_Test deposit called with " << amount << endl;
    return false;
}

bool Account_Test::deposit(double amount) {
    this->balance += amount;
    //cout << "In deposit: " << this->balance << endl;
    cout << "Saving Account_Test withdraw called with " << amount << endl;
    return false;
}


// friend methods -------------------------------------
/*
void display_player(Player &player) {
    cout << player.name << endl;
    cout << player.health << endl;
    cout << player.xp << endl;
}
*/