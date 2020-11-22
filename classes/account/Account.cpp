//
// Created by Administaff on 11/20/20.
//
#include <iostream>
#include "Account.h"

using namespace std;

// constructors and destructor --------------------------
Account::Account(std::string name, double balance)
        : name{name}, balance{balance} {
    cout << "Three-args constructor called" << endl;
    //this->name = name;
    //this->balance = balance;
}

// copy constructor
Account::Account(const Account &source)
        : name{source.name}, balance{source.balance} {
    cout << "Copy constructor called from: " << source.name << endl;
}

Account::~Account() {
    cout << "Destructor called for: " << this->name << endl;
}

// getters and setters -----------------------------------
string Account::get_name() const {
    return this->name;
}

void Account::set_name(std::string name) {
    this->name = name;
}

double Account::getBalance() const {
    return this->balance;
}

void Account::setBalance(double balance) {
    this->balance = balance;
}

// methods -------------------------------------------------
bool Account::withdraw(double amount) {
    this->balance -= amount;
    cout << "In deposit: " << this->balance << endl;
    return false;
}

bool Account::deposit(double amount) {
    this->balance += amount;
    cout << "In deposit: " << this->balance << endl;
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