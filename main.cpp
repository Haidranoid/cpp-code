#include <iostream>
#include "helper.h"
#include "bubble_sort.h"

using namespace std;

void merge_sort_conquer(int *array, int start, int middle, int end) {
    int index_start_left = start;
    int index_start_right = middle + 1;

    size_t size_temp_array = end + 1;
    int temp_array[size_temp_array];
    int index_temp_array = 0;

    while (index_start_left <= middle && index_start_right <= end) {
        if (array[index_start_left] < array[index_start_right]) {
            temp_array[index_temp_array] = array[index_start_left];
            index_start_left++;
            index_temp_array++;
        } else {
            temp_array[index_temp_array] = array[index_start_right];
            index_start_right++;
            index_temp_array++;
        }
    }

    if (index_start_right > end) {
        for (int k = index_start_left; k <= middle; k++) {
            temp_array[index_temp_array] = array[k];
            k++;
            index_temp_array++;
        }
    } else {
        for (int k = index_start_right; k <= end; k++) {
            temp_array[index_temp_array] = array[k];
            k++;
            index_temp_array++;
        }
    }

    for (int k = 0; k < size_temp_array - 1; k++) {
        array[start + k] = temp_array[k];
    }
}

void merge_sort_divide(int *array, int start, int end) {
    if (start < end) {
        int middle = (start + end) / 2;
        merge_sort_divide(array, start, middle);
        merge_sort_divide(array, middle + 1, end);
        merge_sort_conquer(array, start, middle, end);
    }
}


void merge_sort(int *array, size_t size) {
    merge_sort_divide(array, 0, size - 1);
}

int main() {

//    auto time = execute_algorithm(bubble_sort, 8, true);
    auto time = execute_algorithm(merge_sort, 1000, true);
    cout << "time taken: " << time << endl;

    return 0;
}
