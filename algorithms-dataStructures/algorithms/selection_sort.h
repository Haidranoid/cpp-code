void selection_sort(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        // i points at first number after the "wall"
        // j points at second number after the "wall"
        int index_min_value = i;
        for (int j = i + 1; j < size; j++)
            if (array[j] < array[index_min_value])
                index_min_value = j;

        int temp = array[i];
        array[i] = array[index_min_value];
        array[index_min_value] = temp;
    }
}

