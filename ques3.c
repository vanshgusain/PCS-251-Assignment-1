//3. **Find the product of all elements in an array:** Given an array of integers, find the product of all its elements.

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d integers separated by spaces: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    long long product = 1;
    for (int i = 0; i < size; i++) {
        product *= array[i];
    }

    printf("Product of all elements in the array: %lld\n", product);

    return 0;
}
