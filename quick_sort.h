#ifndef QUICK_SORT_H
#define QUICK_SORT_H

void qs_middle_pivot(int *array, int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    int pivot = array[mid];
    int i = low, j = high;
    int temp;
    while (i <= j) {
        while (pivot > array[i])
            i++;

        while (pivot < array[j])
            j--;

        if (i <= j) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (low < j)
        qs_middle_pivot(array, low, j);

    if (i < high)
        qs_middle_pivot(array, i, high);
}

void qs_first_pivot(int *array, int start, int end) {
    if (start < end) {

        int l = start, r = end;
        while (l < r) {
            int temp;
            while (array[r] >= array[l] && l < r)
                r--;

            temp = array[l];
            array[l] = array[r];
            array[r] = temp;

            while (array[l] <= array[r] && l < r)
                l++;

            temp = array[l];
            array[l] = array[r];
            array[r] = temp;
        }


        qs_first_pivot(array, start, l - 1);
        qs_first_pivot(array, l + 1, end);
    }
}

void qs_last_pivot(int *array, int start, int end) {
    if (start < end) {
        int wall = start;
        int pivot = array[end];

        for (int i = start; i < end; ++i) {
            if (array[i] < pivot) {
                int temp = array[i];
                array[i] = array[wall];
                array[wall] = temp;
                wall++;
            }
        }
        array[end] = array[wall];
        array[wall] = pivot;

        qs_last_pivot(array, start, wall - 1);
        qs_last_pivot(array, wall + 1, end);
    }
}

void quick_sort_last_pivot(int *array, int size) {
    qs_last_pivot(array, 0, size - 1);
}

void quick_sort_first_pivot(int *array, int size) {
    qs_first_pivot(array, 0, size - 1);
}

void quick_sort_middle_pivot(int *array, int size) {
    qs_middle_pivot(array, 0, size - 1);
}

#endif //QUICK_SORT_H
