// 23. Calculate Product of Array Elements:
// Write a C function that takes an array of integers and its size as parameters and returns the product of all elements in the array.

#include <stdio.h>

long long int productOfArray(int arr[], int size) {
    long long int product = 1;
    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    long long int product = productOfArray(arr, size);
    printf("Product of array elements: %lld\n", product);

    return 0;
}
