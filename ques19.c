// 19. Check Strong Number:
// Write a function that takes an integer as input and returns true if it's a strong number, false otherwise.

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == originalNum;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isStrongNumber(num)) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}
