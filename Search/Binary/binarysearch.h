#ifndef BINARYSEARCH_H
#define BYNARYSEARCH_H

#include <stdio.h>
#include <stdlib.h>

int arr[] = {1, 5, 27, 31, 42, 79, 89, 136, 155, 200, 271, 333, 477};

int binarySearch(int arr[], int low, int high, int value);
void printArray(int arr[], int low, int high);

#endif