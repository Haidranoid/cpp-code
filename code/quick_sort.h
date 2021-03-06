void quick_sort(int *array, int index_left, int index_right) {
    if (index_left < index_right) {
        int pivot = array[index_right];
        int wall = index_left;

        for (int i = index_left; i < index_right; i++) {
            if (array[i] < pivot) {
                int temp = array[i];
                array[i] = array[wall];
                array[wall] = temp;
                wall++;
            }
        }

        array[index_right] = array[wall];
        array[wall] = pivot;

        quick_sort(array, index_left, wall - 1);
        quick_sort(array, wall + 1, index_right);
    }
}

void quick_sort_executor(int array[], int size) {
    quick_sort(array, 0, size - 1);
}
