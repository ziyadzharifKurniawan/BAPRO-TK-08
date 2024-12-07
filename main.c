#include <stdio.h>
int main()
{
    float a, b;
    float div;
    
    printf("Division Calculator\n"); 
    printf("Enter a and b value: ");
    scanf("%f%f", &a, &b); 
    
    if (b == 0) { 
        printf("Unable to divide by 0!");
        return 1;
    }
    
    div = (float)(a / b); 
    printf("Result: %.2f\n", div); 
    return 0;
}
