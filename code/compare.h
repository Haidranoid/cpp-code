#include <iostream>
#include <string>
#include <ctime>
#include "selection_sort.h"
#include "bubble_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"

// comparing
int *generateArray(int size, int from, int to) {
    int *result = new int[size];
    for (int i = 0; i < size; i++) {
        result[i] = from + (rand() % static_cast<int>(to - from + 1));
    }
    return result;
}

bool isSorted(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (array[i] > array[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isSortedDecreasing(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (array[i] < array[i + 1]) {
            return false;
        }
    }
    return true;
}


void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;
}

void compare() {
    const int SIZE_OF_TESTING_ARRAY = 10000;
    const int NUMBER_OF_ARRAYS = 1000;
    const int RANGE_FROM = 1;
    const int RANGE_TO = 10000;

    const int NUMBER_OF_ALGORITHMS = 4;
    std::string functionName[NUMBER_OF_ALGORITHMS] = {"Selection Sort", "Bubble Sort", "Merge Sort", "Quick Sort"};
    void (*functions[NUMBER_OF_ALGORITHMS])(int *, int) = {selection_sort, bubble_sort, merge_sort_executor, quick_sort_executor};

    for (int i = 0; i < NUMBER_OF_ALGORITHMS; i++) {
        bool allSorted = true;
        clock_t  begin = clock();

        for (int j = 0; j < NUMBER_OF_ARRAYS; j++) {
            int* inputArray = generateArray(SIZE_OF_TESTING_ARRAY,RANGE_FROM,RANGE_TO);
            int cloneArray[SIZE_OF_TESTING_ARRAY];
            memcpy(cloneArray, inputArray, 4 * sizeof(int));

            functions[i](inputArray,SIZE_OF_TESTING_ARRAY);
            if (!isSorted(inputArray,SIZE_OF_TESTING_ARRAY)){
                allSorted=false;
                std::cout << functionName[i] << std::endl;
                std::cout << "ERROR this array is not sorted "<< std::endl;
                printArray(cloneArray,SIZE_OF_TESTING_ARRAY);
                std::cout << "Returned "<< std::endl;
                printArray(inputArray,SIZE_OF_TESTING_ARRAY);
            }
        }

        clock_t end = clock();
        double seconds = double(end - begin) / CLOCKS_PER_SEC;

        if (allSorted){
            std::cout << "*****************************************" << std::endl;
            std::cout << "Finished "<< NUMBER_OF_ARRAYS << " tests." << std::endl;
            std::cout << functionName[i] << std::endl;
            std::cout << "Took : " << seconds << " seconds." << std::endl;
        }
    }
}