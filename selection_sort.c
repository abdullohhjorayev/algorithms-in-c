#include <stdio.h>

void selection_sort(int array[], int length) {
    for(int i = 0; i < length - 1; i++) {
        int min_index = i;
        for(int j = i + 1; j < length; j++) {
            if(array[j] < array[min_index]) {
                min_index = j;
            }
        }
        if(min_index != i) {
            array[i] = array[i] + array[min_index];
            array[min_index] = array[i] - array[min_index];
            array[i] = array[i] - array[min_index];
        }
    }
}

int main() {
    int array[] = {7, 3, 9, 6, 1, 8, 99, 12, 56, 76, 45, 23, 10};
    int length = sizeof(array) / sizeof(array[0]);
    selection_sort(array, length);
    printf("Sorted array: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}