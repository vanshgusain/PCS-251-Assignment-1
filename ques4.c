//4. **Find the median of an array:** Given a sorted array of integers, find the median value. If the array has an odd number of elements, return the middle element. If the array has an even number of elements, return the average of the two middle elements.#include <stdio.h>

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d integers in sorted order separated by spaces: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    float median;
    if (size % 2 != 0) {
        // Odd number of elements
        median = array[size / 2];
    } else {
        // Even number of elements
        int mid1 = array[(size - 1) / 2];
        int mid2 = array[size / 2];
        median = (float)(mid1 + mid2) / 2.0;
    }

    printf("Median of the array: %.2f\n", median);

    return 0;
}
