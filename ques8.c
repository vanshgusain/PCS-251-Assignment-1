//8. **Find the maximum sum subarray:** Given an array of integers, find the contiguous subarray with the largest sum.

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

    int max_so_far = array[0];
    int max_ending_here = array[0];

    for (int i = 1; i < size; i++) {
        // Calculate the maximum sum ending at the current index
        max_ending_here = (max_ending_here + array[i] > array[i]) ? max_ending_here + array[i] : array[i];

        // Update the maximum sum so far
        max_so_far = (max_so_far > max_ending_here) ? max_so_far : max_ending_here;
    }

    printf("Maximum sum of a subarray: %d\n", max_so_far);

    return 0;
}