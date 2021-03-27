#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <cstdlib>
#include <ctime>

void display(int *array, size_t size) {
    std::cout << "[ ";
    for (int i = 0; i < size; ++i)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl;
}

int *generate_array(size_t size) {
    int *array = new int[size];
    for (int i = 0; i < size; i++)
        array[i] = rand() % size;
    return array;
}

double execute_algorithm(void (*algorithm)(int *, int), int size, bool print = false) {
    int *array = generate_array(size);

    clock_t start = clock();
    // --------------- <algorithm> --------------
    algorithm(array, size);
    // --------------- </algorithm> -------------
    clock_t end = clock();
    double final = double(end - start) / CLOCKS_PER_SEC;

    if (print)
        display(array, size);

    delete array;

    return final;
}


#endif //HELPER_H
