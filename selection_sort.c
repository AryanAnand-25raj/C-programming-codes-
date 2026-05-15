#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp, minIdx;

    printf("Enter the Number of Elements: ");
    scanf("%d", &n);

    printf("\nEnter the Array Elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter Element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Selection Sort Logic
    for (i = 0; i < n - 1; i++)
    {
        // assume current position is minimum
        minIdx = i;

        // find the actual minimum in remaining array
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIdx])
                minIdx = j;
        }

        // swap minimum element with current position
        if (minIdx != i)
        {
            temp       = a[i];
            a[i]       = a[minIdx];
            a[minIdx]  = temp;
        }
    }

    printf("\nSorted Array in Ascending Order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
  