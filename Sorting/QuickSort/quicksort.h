#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <stdio.h>
#include <stdlib.h>

// Desorder array used in code
int arr[] = {27, 42, 79, 155, 31, 5, 200, 1};

int partition(int arr[], int low, int high);
void printArray(int arr[], int size);
void quickSort(int v[], int low, int high);
void swap(int* a, int* b);

#endif /* QUICKSORT_H */