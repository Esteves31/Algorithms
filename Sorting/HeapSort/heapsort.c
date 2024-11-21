#include "heapsort.h"

int main () {
    int len = sizeof(arr) / sizeof(arr[0]);

    heapSort(len, arr);
    printArray(len, arr);

    return EXIT_SUCCESS;
}

void printArray(int size, int arr[]) {
    printf("[ ");

    for (int i = 0; i < size; i++) {
        if (i + 1 == size)
            printf("%d", arr[i]);
        else    
            printf("%d, ", arr[i]);
    }

    printf("]\n");
}

void heapSort (int n, int v[]) {
    int m;

    for (m = 1; m < n; m++) 
        insertInHeap(m, v);
    
    for (m = n; m > 1; m--) {
        int temp = v[1];
        v[1] = v[m];
        v[m] = temp;
        shakeHeap(m - 1, v);
    }
}

void insertInHeap (int m, int v[]) {
    int f = m + 1;

    while (f > 1 && v[f / 2] < v[f]) {
        int temp = v[f / 2];
        v[f / 2] = v[f];
        v[f] = temp;
        f = f / 2;
    }
}

void shakeHeap (int m, int v[]) {
    int temp, f = 2;

    while (f <= m) {
        if (f < m && v[f] < v[f + 1])
            ++f;
        
        if (v[f / 2] >= v[f])
            break;
        
        temp = v[f / 2];
        v[f / 2] = v[f];
        v[f] = temp;
        f *= 2;
    }
}
