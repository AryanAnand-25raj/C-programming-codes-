#include <stdio.h>

int main(void)
{
    int a[100], b[100], c[100], n, i;

    printf("Enter the Number of Elements: ");
    scanf("%d", &n);

    // input each element of first array one by one
    printf("\nEnter Elements of First Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter Element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // input each element of second array one by one
    printf("\nEnter Elements of Second Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter Element b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    // adding corresponding elements
    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    // printing all three arrays
    printf("\nFirst Array  : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nSecond Array : ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    printf("\nSum Array    : ");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);

    printf("\n");

    return 0;
}
