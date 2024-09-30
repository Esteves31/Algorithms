#include "insertionsort.h"

int main() {
    int len = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, len);
    printArray(arr, len);

    return EXIT_SUCCESS;
}

void swap(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void printArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        if (i + 1 == size)
            printf("%d", arr[i]);
        else    
            printf("%d, ", arr[i]);
    }
    printf("]\n");
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        for (int j = i; j >= 0; j--) {
            if (arr[j] < arr[j - 1])
                swap(&arr[j], &arr[j - 1]);
        }
    }
}