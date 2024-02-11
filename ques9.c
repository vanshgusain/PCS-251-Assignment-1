//9. **Find the majority element in an array:** Given an array of integers, find the majority element (element that appears more than n/2 times).

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

    int majority_element = array[0];
    int count = 1;

    // Find the majority element using Moore's Voting Algorithm
    for (int i = 1; i < size; i++) {
        if (array[i] == majority_element) {
            count++;
        } else {
            count--;
            if (count == 0) {
                majority_element = array[i];
                count = 1;
            }
        }
    }

    // Verifying if the found element is the majority element
    count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == majority_element) {
            count++;
        }
    }

    if (count > size / 2) {
        printf("Majority element: %d\n", majority_element);
    } else {
        printf("No majority element found\n");
    }

    return 0;
}
