// 13. Check Perfect Square:
// Write a function that takes an integer as input and returns true if it's a perfect square, false otherwise.

#include <stdio.h>
#include <stdbool.h>

bool isPerfectSquare(int num) {
    int i = 1;
    while (i * i <= num) {
        if (i * i == num) {
            return true;
        }
        i++;
    }
    return false;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
