// 14. Calculate Factorial Digit Sum:
// Write a function that takes an integer as input, calculates the factorial of each digit, and returns the sum of these factorials.

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int digitFactorialSum(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int sum = digitFactorialSum(num);
    printf("Sum of factorials of digits: %d\n", sum);

    return 0;
}
