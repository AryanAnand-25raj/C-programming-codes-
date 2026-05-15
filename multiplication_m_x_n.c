#include <stdio.h>

int main()
{
    int a[5][5], b[5][5], c[5][5], i, j, k, m, n, o, p;

    printf("Enter the Row and Column of First Matrix : ");
    scanf("%d %d", &m, &n);

    printf("Enter the Row and Column of Second Matrix: ");
    scanf("%d %d", &o, &p);

    // BUG FIX: was n!=0 should be n!=o
    // columns of first matrix must equal rows of second matrix
    if (n != o)
    {
        printf("\nMultiplication is Not Possible");
        printf("\nColumn of First Matrix must be Equal to Row of Second Matrix\n");
    }
    else
    {
        // input first matrix
        printf("\nEnter the First Matrix:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter Element a[%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        // input second matrix
        printf("\nEnter the Second Matrix:\n");
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf("Enter Element b[%d][%d]: ", i, j);
                scanf("%d", &b[i][j]);
            }
        }

        // print first matrix
        printf("\nFirst Matrix:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d\t", a[i][j]);
            printf("\n");
        }

        // print second matrix
        printf("\nSecond Matrix:\n");
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
                printf("%d\t", b[i][j]);
            printf("\n");
        }

        // matrix multiplication logic
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < p; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // BUG FIX: print and multiplication moved inside else block
        // so it only runs when multiplication is possible
        printf("\nMultiplication Matrix:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < p; j++)
                printf("%d\t", c[i][j]);
            printf("\n");
        }
    }

    return 0;
}