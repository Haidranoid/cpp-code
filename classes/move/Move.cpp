//
// Created by Administaff on 11/20/20.
//
#include <iostream>
#include "Move.h"

using namespace std;

Move::Move(int d) : data{nullptr} {
    data = new int;
    *data = d;
    cout << "Constructor for: " << this->get_data() << endl;
}

Move::Move(const Move &source)
        : Move(*source.data) {
    cout << "Copy constructor - deep for: " << this->get_data() << endl;
}

Move::Move(Move &&source) noexcept
        : data{source.data} {
    source.data = nullptr;
    cout << "Move constructor for: " << this->get_data() << endl;
}

Move::~Move() {
    if (data != nullptr) {
        cout << "Destructor freeing data for: " << this->get_data() << endl;
    } else {
        cout << "Destructor freeing data for [nullptr] " << endl;
    }

    delete data;
}

int Move::get_data() const {
    return *data;
}

void Move::set_data(int d) {
    *data = d;
}