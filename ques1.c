//11. **Find the sum of even and odd numbers in an array:** Given an array of integers, calculate the sum of all even numbers and the sum of all odd numbers separately.

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

    int even_sum = 0, odd_sum = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            even_sum += array[i];
        } else {
            odd_sum += array[i];
        }
    }

    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return 0;
}
