#include <iostream>

using namespace std;


void selection_sort(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        // i points at first number behind   "wall"
        // j points at the numbers after the "wall"
        int index_min_value = i;
        for (int j = i + 1; j < size; j++)
            if (array[j] < array[index_min_value])
                index_min_value = j;

        int temp = array[i];
        array[i] = array[index_min_value];
        array[index_min_value] = temp;
    }
}

int main() {
    int arr[]{20, 3, 6, 8, 1, 6};
    selection_sort(arr, 6);

    for (int i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}
