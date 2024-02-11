//2. **Find the maximum difference between two elements in an array:** Given an array of integers, find the maximum difference between any two elements such that the larger element appears after the smaller element.

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

    int max_diff = array[1] - array[0];
    int min_element = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] - min_element > max_diff) {
            max_diff = array[i] - min_element;
        }
        if (array[i] < min_element) {
            min_element = array[i];
        }
    }

    printf("Maximum difference between two elements: %d\n", max_diff);

    return 0;
}
