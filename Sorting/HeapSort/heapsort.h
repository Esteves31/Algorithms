#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <stdio.h>
#include <stdlib.h>

// Desorder array used in code
int arr[] = {27, 42, 79, 155, 31, 5, 200, 1};

void printArray(int size, int arr[]);
void heapSort (int n, int v[]);
void insertInHeap (int m, int v[]);
void shakeHeap (int m, int v[]);

#endif /* HEAPSORT_H */