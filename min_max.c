#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int min, max;

    printf("Enter the Number of Elements of the Array: ");
    scanf("%d", &n);

    printf("\nEnter the Elements of the Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the Element a[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    
    printf("\nArray Elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    
    printf("\nMinimum Element in Array: %d\n", min);
    printf("Maximum Element in Array: %d\n", max);

    return 0;
}
