#include <iostream>
#include "helper.h"

using namespace std;

void insertion_sort(int *array, int size) {
    int pop, current, next;

    for (int i = 0; i < size - 1; i++) {
        current = array[i];
        next = array[i + 1];

        if (next < current) {
            pop = next;

            for (int j = i + 1; j > 0; j--) {
                if (pop < array[j - 1]) {
                    array[j] = array[j - 1];
                    array[j - 1] = pop;
                } else
                    break;
            }
        }
    }
}

int main() {
    int iterations = 100;
    double time1 = execute_algorithm(insertion_sort, iterations, true);
//    double time2 = execute_algorithm(bubble_sort, iterations);
    cout << "insertion sort time [iterations:" << iterations << "] => " << time1 << " seconds " << endl;
//    cout << "quick sort time [iterations:" << iterations << "] => " << time2 << " seconds " << endl;

    return 0;
}
