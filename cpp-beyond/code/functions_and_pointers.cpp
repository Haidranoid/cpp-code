//
// Created by Administaff on 11/18/20.
//
#include <iostream>

using namespace std;

// never return a pointer to a local variable
/*
int *example_1() {
    int size{};
    return &size;
}

int *example_2() {
    int size{};
    int *size_ptr{&size};
    return size_ptr;
}


int *create_array(size_t size, int init_value = 0) {
    int *new_storage{nullptr};
    new_storage = new int[size];
    for (size_t i = 0; i < size; ++i) {
        //*(new_storage + i) = init_value
        new_storage[i] = init_value;
    }
    return new_storage;
}

// display with array size
void display(const int *const array, size_t size) {
    for (size_t i{0}; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// display with sentinel
void display(int *array, int sentinel) {
    while (*array != sentinel) {
        cout << *array << " ";
        array++;
    }
    cout << endl;
}

int functions_and_pointers() {
    int *my_array{nullptr};
    size_t size = 5;

    my_array = create_array(size, 10);

    display(my_array, size);

    return 0;
}
*/