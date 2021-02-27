void bubble_sort(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swapped = true;
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

