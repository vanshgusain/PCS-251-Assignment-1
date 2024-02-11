// 11. Check Even or Odd:
// Write a function that takes an integer as input and returns true if it's even, false otherwise.

#include <stdio.h>
#include <stdbool.h>

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
