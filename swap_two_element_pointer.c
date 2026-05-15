#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}

int main()
{
    int x, y;

    printf("Enter First Number : ");
    scanf("%d", &x);
    printf("Enter Second Number: ");
    scanf("%d", &y);

    printf("\nBefore Swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swap : x = %d, y = %d\n", x, y);

    return 0;
}