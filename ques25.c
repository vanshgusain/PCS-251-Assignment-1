// 25. Calculate Median of Array:
// Write a C function that takes an array of integers and its size as parameters and returns the median value of the elements in the array.

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

double medianOfArray(int arr[], int size) {
    qsort(arr, size, sizeof(int), compare);
    if (size % 2 != 0) {
        return (double)arr[size / 2];
    } else {
        return (double)(arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    }
}

int main() {
    int arr[] = {3, 1, 5, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    double median = medianOfArray(arr, size);
    printf("Median of array: %.2f\n", median);

    return 0;
}
