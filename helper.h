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

void execute_algorithm(const char *(*algorithm)(int *, int), int size, bool print = false) {
    int *array = generate_array(size);


    if (print)
        std::cout << "unsorted array => ", display(array, size);

    clock_t start = clock();
    // --------------- <algorithm> --------------
    const char *algorithm_name = algorithm(array, size);
    // --------------- </algorithm> -------------
    clock_t end = clock();
    double final = double(end - start) / CLOCKS_PER_SEC;

    if (print)
        std::cout << "\nsorted array => ", display(array, size);

    std::cout << "\n" << algorithm_name << " [iterations:" << size << "] => " << final << " seconds " << std::endl;

    delete array;
}


#endif //HELPER_H
