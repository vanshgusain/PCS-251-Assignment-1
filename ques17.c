// 17. Check Harshad Number:
// Write a function that takes an integer as input and returns true if it's a Harshad number, false otherwise.

#include <stdio.h>
#include <stdbool.h>

bool isHarshad(int num) {
    int sum = 0;
    int temp = num;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return num % sum == 0;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isHarshad(num)) {
        printf("%d is a Harshad number.\n", num);
    } else {
        printf("%d is not a Harshad number.\n", num);
    }

    return 0;
}
