#include <iostream>

void merge(int array[], int from, int middle, int to) {
    int length_left = middle - from + 1;
    int length_right = to - middle;

    int *left = new int[length_left + 1];
    int *right = new int[length_right + 1];

    for (int i = 0; i < length_left; ++i) {
        left[i] = array[from + i];
    }

    for (int i = 0; i < length_right; ++i) {
        right[i] = array[middle + i + 1];
    }

    left[length_left] = INT_MAX;
    right[length_right] = INT_MAX;

    int left_pointer = 0;
    int right_pointer = 0;

    for (int i = from; i <= to; ++i) {
        if (left[left_pointer] > right[right_pointer]) {
            array[i] = right[right_pointer];
            right_pointer++;
        } else {
            array[i] = left[left_pointer];
            left_pointer++;
        }
    }
}

void merge_sort(int array[], int left_index, int right_index) {
    if (left_index >= right_index)
        return;
    else {
        int middle = (left_index + right_index) / 2;
        merge_sort(array, left_index, middle);
        merge_sort(array, middle + 1, right_index);
        merge(array, left_index, middle, right_index);
    }
}

void merge_sort_executor(int array[], int size) {
    merge_sort(array, 0, size - 1);
}

