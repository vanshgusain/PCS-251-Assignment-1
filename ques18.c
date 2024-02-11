// 18. Calculate Reverse Factorial:
// Write a function that takes an integer as input and returns the highest factorial less than or equal to that number.

#include <stdio.h>

int reverseFactorial(int num) {
    int fact = 1;
    int i = 2;
    while (fact < num) {
        fact *= i;
        if (fact == num) {
            return i;
        }
        i++;
    }
    return -1; // No reverse factorial found
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
}