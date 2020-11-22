//
// Created by Administaff on 11/20/20.
//
#include <iostream>
#include "Deep.h"

using namespace std;

Deep::Deep(int d) : data{nullptr} {
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
        : Deep(*source.data) {
    cout << "Copy constructor - deep" << endl;
}

Deep::~Deep() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

int Deep::get_data() const {
    return *data;
}

void Deep::set_data(int d) {
    *data = d;
}
