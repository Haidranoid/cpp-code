#include <iostream>
#include "helper.h"
#include "bubble_sort.h"
#include "merge_sort.h"

using namespace std;

int main() {

    int iterations = 100000;
    double time1 = execute_algorithm(bubble_sort, iterations);
    double time2 = execute_algorithm(merge_sort, iterations);

    cout << "bubble sort time [iterations:" << iterations << "] => " << time1 << " seconds " << endl;
    cout << "merge sort time [iterations:" << iterations << "] => " << time2 << " seconds " << endl;

    return 0;
}
