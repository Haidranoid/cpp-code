//
// Created by Administaff on 11/20/20.
//
#include <iostream>
#include "Shallow.h"

using namespace std;

Shallow::Shallow(int d) : data{nullptr} {
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
        : data{source.data} {
    cout << "Copy constructor - shallow" << endl;
}

Shallow::~Shallow() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

int Shallow::get_data() const {
    return *data;
}

void Shallow::set_data(int d) {
    *data = d;
}
