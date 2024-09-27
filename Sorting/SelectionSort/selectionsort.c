#include "selectionsort.h"

int main() {

    int len = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, len);
    printArray(arr, len);

    return EXIT_SUCCESS;
}

void swap(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void printArray(int arr[], int len) {
    printf("[");
    for (int i = 0; i < len; i++) {
        if (i + 1 == len)
            printf("%d]\n", arr[i]);
        else
            printf("%d, ", arr[i]);
    }
}

void selectionSort(int arr[], int len) {
    int minVal;
    
    for (int i = 0; i < len; i++) {
        minVal = arr[i];

        for (int j = i + 1; j < len; j++) {
            if (arr[j] < minVal) 
                swap(&arr[j], &arr[i]);
        }
    }
}