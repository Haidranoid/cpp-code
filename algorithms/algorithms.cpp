#include <iostream>
#include "compare.h"

using namespace std;

void display(int *array, int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << "]" << endl;
}

int algorithms() {
//    int array[]{20, 34, 6, 8, 1, 6, 15, 3, 8, 12};

    // range based sort
    // selection_sort(array, 10);
    // bubble_sort(array, 10);

    // recursion based sort
    // int fac =  factorial(5);
    // int fib =  fibonacci(5);
    // merge_sort(array, 0, ((sizeof array / sizeof array[0]) - 1));
    // quick_sort(array, 0, ((sizeof array / sizeof array[0]) - 1));


//    display(array, 10);

    compare();
    return 0;
}
