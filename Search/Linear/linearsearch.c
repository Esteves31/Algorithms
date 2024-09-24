#include "linearsearch.h"

int main() {
    int len = sizeof(arr) / sizeof(arr[0]);
    int value = 200;
    int result = search(arr, 0, len - 1, value);

    (result == -1) 
        ? printf("Element is not present in array! \n")
        : printf("Element is present at index %d \n", result);

    return EXIT_SUCCESS;
}

// The printArray function is only used to visualize how linear search works
void printArray(int arr[], int high, int value) {
    printf("[");
    for (int i = 0; i <= high; i++) {
        if (i == high)
            printf("%d", arr[i]);
        else if (i == value)
            printf("->%d, ", arr[i]);
        else
            printf("%d, ", arr[i]);
    }
    printf("] \n");
}

int search(int arr[], int low, int high, int value) {
    for (int i = 0; i <= high; i++) {
        printArray(arr, high, i);
        if (arr[i] == value)
            return i;
    }

    return -1;
}
