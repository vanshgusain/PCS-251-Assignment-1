// 24. Search Element in Array:
// Write a C function that takes an array of integers, its size, and a target element as parameters, and returns true if the target element is present in the array, false otherwise.

#include <stdio.h>
#include <stdbool.h>

bool searchElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    if (searchElement(arr, size, target)) {
        printf("%d is found in the array.\n", target);
    } else {
        printf("%d is not found in the array.\n", target);
    }

    return 0;
}
