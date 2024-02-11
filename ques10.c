//10. **Find the equilibrium index of an array:** An equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. Find any equilibrium index in the given array.

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

    int total_sum = 0;
    int left_sum = 0;

    // Calculate the total sum of elements in the array
    for (int i = 0; i < size; i++) {
        total_sum += array[i];
    }

    // Traverse the array and check for equilibrium index
    for (int i = 0; i < size; i++) {
        // Subtract the current element from the total sum to get the right sum
        total_sum -= array[i];

        // If left_sum equals total_sum, then the current index is an equilibrium index
        if (left_sum == total_sum) {
            printf("Equilibrium index: %d\n", i);
            return 0;
        }

        // Add the current element to the left_sum for the next iteration
        left_sum += array[i];
    }

    // If no equilibrium index is found, print a message indicating so
    printf("No equilibrium index found\n");

    return 0;
}