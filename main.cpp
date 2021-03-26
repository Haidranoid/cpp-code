#include <iostream>
#include "helper.h"
#include "bubble_sort.h"

using namespace std;

void merge_sort_conquer(int *array, int start, int middle, int end) {
    int l = start;
    int r = middle + 1;

    size_t size = end - start + 1;
    int temp_array[size];
    int i = 0;

    while (l <= middle && r <= end)
        if (array[l] < array[r])
            temp_array[i++] = array[l++];
        else
            temp_array[i++] = array[r++];


    while (l <= middle)
        temp_array[i++] = array[l++];

    while (r <= end)
        temp_array[i++] = array[r++];


    for (i = 0; i < size; i++)
        array[start + i] = temp_array[i];
}

void merge_sort_divide(int *array, int start, int end) {
    if (start < end) {
        int middle = (start + end) / 2;
        merge_sort_divide(array, start, middle);
        merge_sort_divide(array, middle + 1, end);
        merge_sort_conquer(array, start, middle, end);
    }
}


void merge_sort(int *array, int size) {
    merge_sort_divide(array, 0, size - 1);
}

int main() {

    int iterations = 100000;
    double time1 = execute_algorithm(bubble_sort, iterations);
    double time2 = execute_algorithm(merge_sort, iterations);

    cout << "bubble sort time [iterations:" << iterations << "] => " << time1 << " seconds " << endl;
    cout << "merge sort time [iterations:" << iterations << "] => " << time2 << " seconds " << endl;
//    int array[] = {4, 8, 29, 9, 59, 384, 5};
//    merge_sort(array, 7);
//    display(array, 7);

    return 0;
}
