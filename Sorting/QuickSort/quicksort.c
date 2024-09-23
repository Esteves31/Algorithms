#include "quicksort.h"

int main() {
    int len = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr, 0, len - 1);
    printArray(arr, len);

    return EXIT_SUCCESS;
}

void swap(int* a, int* b) {
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

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
    
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);

    return i + 1;
}