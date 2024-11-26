#include <stdio.h>

// Define the macro to find the maximum of two numbers
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main()
{
    int a, b, max;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Use the macro to find the maximum
    max = MAX(a, b);

    printf("The maximum number is: %d\n", max);

    return 0;
}