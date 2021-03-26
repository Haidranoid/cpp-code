#include <iostream>
#include "helper.h"
#include "quick_sort.h"
#include "merge_sort.h"

using namespace std;

void quick_sort(int *array, int start, int end) {
    if (start < end) {
        int pivot = array[(start + end) / 2];
        int l = start, r = end;

        while (l <= r) {
            while (pivot > array[l])
                l++;

            while (pivot < array[r])
                r--;

            if (l <= r) {
                int temp = array[l];
                array[l] = array[r];
                array[r] = temp;
                l++;
                r--;
            }
        }

//        if (start < r)
        quick_sort(array, start, r);

//        if (l < end)
        quick_sort(array, l, end);
    }
}

void qs_algorithm(int *array, int size) {
    quick_sort(array, 0, size - 1);
}

int main() {

    int iterations = 100000;
    int array[] = {9, 3, 7, 5, 16, 4, 8, 2};

//    qs_algorithm(array, 8);
//    quick_sort_last_pivot(array, 12);

//    display(array, 8);

    double time1 = execute_algorithm(quick_sort_middle_pivot, iterations);
    double time2 = execute_algorithm(qs_algorithm, iterations);

//    cout << "bubble sort time [iterations:" << iterations << "] => " << time1 << " seconds " << endl;
    cout << "quick sort middle time [iterations:" << iterations << "] => " << time1 << " seconds " << endl;
    cout << "quick sort time [iterations:" << iterations << "] => " << time2 << " seconds " << endl;
    return 0;
}
