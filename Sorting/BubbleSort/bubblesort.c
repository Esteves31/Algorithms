#include "bubblesort.h"

int main() {
    int len = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, len);
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

void bubbleSort(int arr[], int size) {
    bool isSwaped;

    for (int i = 0; i < size - 1; i++) {
        isSwaped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                isSwaped = true;
            }

        }
        
        if (!isSwaped)
            break;
    }
}