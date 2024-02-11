//6. **Find the leader elements in an array:** An element is called a leader if it is greater than all the elements to its right side in the array. Find all the leader elements in the given array.

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

    int max_from_right = array[size - 1];
    printf("Leader elements in the array: %d ", max_from_right);

    for (int i = size - 2; i >= 0; i--) {
        if (array[i] > max_from_right) {
            printf("%d ", array[i]);
            max_from_right = array[i];
        }
    }

    printf("\n");

    return 0;
}