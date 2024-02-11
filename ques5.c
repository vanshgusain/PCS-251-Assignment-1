//5. **Find the number of pairs with a given sum:** Given an array of integers and a target sum, find the number of distinct pairs of elements whose sum is equal to the target sum.

#include <stdio.h>

int main() {
    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d integers separated by spaces: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] + array[j] == target) {
                count++;
            }
        }
    }

    printf("Number of distinct pairs with sum %d: %d\n", target, count);

    return 0;
}