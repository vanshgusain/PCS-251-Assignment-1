// 15. Check Happy Number:
// Write a function that takes an integer as input and returns true if it's a happy number, false otherwise.

#include <stdio.h>
#include <stdbool.h>

bool isHappy(int num) {
    while (num != 1 && num != 4) {
        int sum = 0;
        while (num) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }
    return num == 1;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isHappy(num)) {
        printf("%d is a happy number.\n", num);
    } else {
        printf("%d is not a happy number.\n", num);
    }

    return 0;
}
