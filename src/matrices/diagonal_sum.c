#include <stdio.h>

int main(void)
{
    int a[10][10], n, i, j, sum = 0;

    printf("Enter the Size of Matrix (n x n): ");
    scanf("%d", &n);

    printf("\nEnter the Matrix Elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter Element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // principal diagonal elements are where i==j
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    // printing matrix
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    printf("\nSum of Diagonal Elements = %d\n", sum);

    return 0;
}
