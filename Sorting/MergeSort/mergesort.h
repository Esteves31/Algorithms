#ifndef MERGESORT_H
#define MERGESORT_H

#include <stdio.h>
#include <stdlib.h>

// Desorder array used in code
int arr[] = {27, 42, 79, 155, 31, 5, 200, 1};

void printArray(int size, int arr[]);
void mergeSort (int p, int r, int v[]);
void merge (int p, int q, int r, int v[]);

#endif /* MERGESORT_H */