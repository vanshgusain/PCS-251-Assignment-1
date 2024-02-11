// 22. Find Index of Maximum Element in Array:
// Write a C function that takes an array of integers and its size as parameters and returns the index of the maximum element in the array.#include <stdio.h>

int indexOfMax(int arr[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int arr[] = {1, 3, 2, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxIndex = indexOfMax(arr, size);
    printf("Index of maximum element: %d\n", maxIndex);

    return 0;
}
