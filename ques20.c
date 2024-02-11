// 20. Check Narcissistic Number:
// Write a function that takes an integer as input and returns true if it's a narcissistic number, false otherwise.

#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int isNarcissistic(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    return sum == originalNum;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isNarcissistic(num)) {
        printf("%d is a narcissistic number.\n", num);
    } else {
        printf("%d is not a narcissistic number.\n", num);
    }

    return 0;
}
