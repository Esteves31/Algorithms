#include "binarysearch.h"

int main() {
    int len = sizeof(arr) / sizeof(arr[0]);
    int value = 271;
    int result = binarySearch(arr, 0, len - 1, value);
    
    if(result == -1) 
        printf("Element is not present in array \n");
    else 
        printf("Element is present at index %d \n", result);

    return EXIT_SUCCESS;
}

// The printArray function is only used to visualize how binary search works
void printArray(int arr[], int low, int high) {
    printf("[");
    for (int i = low; i <= high; i++) {
        if (i == high)
            printf("%d", arr[i]);
        else
            printf("%d, ", arr[i]);
    }
    printf("] \n");
}

int binarySearch(int arr[], int low, int high, int value) {
    int mid = low + (high - low) / 2;

    printArray(arr, low, high); 

    if (arr[mid] == value) 
        return mid;
    else if (arr[mid] > value)
        binarySearch(arr, low, mid - 1, value);
    else if (arr[mid] < value)
        binarySearch(arr, mid + 1, high, value);
    else 
        return -1;
}
