// 12. Calculate Area of Circle:
// Write a function that takes the radius of a circle as input and returns its area.

#include <stdio.h>

float calculateArea(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = calculateArea(radius);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
