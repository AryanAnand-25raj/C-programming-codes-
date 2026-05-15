#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("\nBefore Swapping:\n");
    printf("Value of a is: %d\n", a);
    printf("Value of b is: %d\n", b);

    // Method 1: Swapping using a third variable
    int c = a;
    a = b;
    b = c;

    printf("\nAfter Swapping (using third variable):\n");
    printf("Value of a is: %d\n", a);
    printf("Value of b is: %d\n", b);

    // Method 2: Swapping using Arithmetic logic
    // Swap them back to original values first
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swapping (using Arithmetic logic):\n");
    printf("Value of a is: %d\n", a);
    printf("Value of b is: %d\n", b);
}
