#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <stdio.h>
#include <stdlib.h>

// Desorder array used in code
int arr[] = {27, 42, 79, 155, 31, 5, 200, 1};

void insertionSort(int arr[], int size);
void printArray(int arr[], int size);
void swap(int *a, int *b);

#endif