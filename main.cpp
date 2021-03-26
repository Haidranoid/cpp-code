#include <iostream>
#include "helper.h"
#include "quick_sort.h"
#include "merge_sort.h"

using namespace std;

int main() {

    int iterations = 100000;
    int array[] = {9, 3, 7, 5, 16, 4, 8, 2};

//    qs_algorithm(array, 8);
//    quick_sort_last_pivot(array, 12);

//    display(array, 8);

    double time1 = execute_algorithm(quick_sort_middle_pivot, iterations);
    double time2 = execute_algorithm(quick_sort_algorithm, iterations);
    double time3 = execute_algorithm(quick_sort_last_pivot, iterations);

//    cout << "bubble sort time [iterations:" << iterations << "] => " << time1 << " seconds " << endl;
    cout << "quick sort middle time [iterations:" << iterations << "] => " << time1 << " seconds " << endl;
    cout << "quick sort time [iterations:" << iterations << "] => " << time2 << " seconds " << endl;
    cout << "quick sort last time [iterations:" << iterations << "] => " << time3 << " seconds " << endl;
    return 0;
}
