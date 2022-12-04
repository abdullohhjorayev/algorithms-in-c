#include <stdio.h>

int binary_search(int array[], int length, int target) {
    int low = 0, high = length - 1, mid;
    while(low <= high) {
        mid = (low + high) / 2;
        if(array[mid] == target) {
            return mid;
        } else if(array[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
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
    printf("%d\n", binary_search(array, length, target));
    

    return 0;
}