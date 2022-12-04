#include <stdio.h>

int linear_search(int array[], int length, int target) {
    for(int i = 0; i < length; i++) {
        if(array[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {1, 3, 4, 6, 7, 8, 10, 12, 23, 45, 56, 78, 99};
    int length = sizeof(array) / sizeof(array[0]);
    int target;
    printf("Enter the target number: ");
    scanf("%d", &target);
    printf("%d\n", linear_search(array, length, target));
}