//7. **Sort an array of 0s, 1s, and 2s (Dutch National Flag Problem):** Given an array containing only 0s, 1s, and 2s, sort the array in ascending order without using any sorting algorithm.

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d integers (0s, 1s, and 2s) separated by spaces: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int low = 0, mid = 0, high = size - 1;

    while (mid <= high) {
        switch (array[mid]) {
            case 0:
                // Swap array[low] and array[mid], increment both low and mid
                array[mid] = array[low];
                array[low] = 0;
                low++;
                mid++;
                break;
            case 1:
                // Move to the next element
                mid++;
                break;
            case 2:
                // Swap array[mid] and array[high], decrement high
                array[mid] = array[high];
                array[high] = 2;
                high--;
                break;
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}