#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H
const char* insertion_sort(int *array, int size) {
    int pop;
    for (int i = 0; i < size - 1; i++) {

        if (array[i + 1] < array[i]) {
            pop = array[i + 1];

            for (int j = i + 1; j > 0; j--) {
                if (pop < array[j - 1]) {
                    array[j] = array[j - 1];
                    array[j - 1] = pop;
                } else
                    break;
            }
        }
    }
    return __func__ ;
}
#endif //INSERTION_SORT_H
