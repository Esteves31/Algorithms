#include "mergesort.h"

int main () {
    int len = sizeof(arr) / sizeof(arr[0]);

    mergeSort(0, len, arr);
    printArray(len, arr);

    return EXIT_SUCCESS;
}

void printArray(int size, int arr[]) {
    printf("[");

    for (int i = 0; i < size; i++) {
        if (i + 1 == size)
            printf("%d", arr[i]);
        else    
            printf("%d, ", arr[i]);
    }

    printf("]\n");
}

void mergeSort (int p, int r, int v[]) {
    if (p < r - 1) {
        int q = (p + r) / 2;
        mergeSort(p, q, v);
        mergeSort(q, r, v);
        merge(p, q, r, v);
    }
}

void merge (int p, int q, int r, int v[]) {
    int i, j, k, *temp;
    i = p;
    j = q;
    k = 0;
    temp = malloc ((r - p) * sizeof(int));

    while (i < q && j < r) {
        if (v[i] < v[j])
            temp[k++] = v[i++];
        else
            temp[k++] = v[j++];
    }

    while (i < q) 
        temp[k++] = v[i++];
    
    while (j < r) 
        temp[k++] = v[j++];
    
    for (i = p; i < r; i++)
        v[i] = temp[i - p];

    free(temp);
}