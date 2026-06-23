#include <stdio.h>

int main(void)
{
    int a[100], n, i, j, key;

    printf("Enter the Number of Elements: ");
    scanf("%d", &n);

    printf("\nEnter the Array Elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter Element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Insertion Sort Logic
    for (i = 1; i < n; i++)
    {
        // pick current element as key
        key = a[i];
        j   = i - 1;

        // shift elements greater than key one position ahead
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        // place key in its correct position
        a[j + 1] = key;
    }

    printf("\nSorted Array in Ascending Order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
