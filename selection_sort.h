#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

const char *selection_sort(int *array, int size) {
    int temp, min;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; ++j)
            if (array[j] < array[i])
                min = j;

        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
    return __func__;
}

#endif //SELECTION_SORT_H
