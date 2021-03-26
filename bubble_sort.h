#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <iostream>

void bubble_sort(int *array, int size) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < size - 1; ++i) {
            int left_index = i;
            int right_index = i + 1;
            if (array[left_index] > array[right_index]) {
                int temp = array[left_index];
                array[left_index] = array[right_index];
                array[right_index] = temp;

                swapped = true;
            }
        }
    }
}
#endif //BUBBLE_SORT_H
