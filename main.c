#include <stdio.h>

float subtract(float x, float y) {
    return x - y;
}

int main()
{
    float a, b, sum;

    printf("Subtraction Calculator\n");
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    sum = subtract(a, b);
    printf("Result: %.2f\n", sum);

    return 0;
}
