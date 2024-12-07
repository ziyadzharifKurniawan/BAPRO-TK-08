#include <stdio.h>

float add(float x, float y)
{
    return x + y;
}

int main()
{
    float a, b, sum;

    printf("Addition Calculator\n");
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    sum = add(a, b);
    printf("Result: %.2f\n", sum);

    return 0;
}
