#include <stdio.h>

int main(void)
{
    int a[100], n, x, mid, low, high;
    int i, flag = 0;

    printf("Enter the Number of Elements: ");
    scanf("%d", &n);

    // BUG FIX: removed duplicate input loop that was overwriting array
    printf("\nEnter Array Elements (in Sorted Order):\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter Element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter the Element to Search: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == x)
        {
            flag = 1;
            break;
        }
        // BUG FIX: was a[mid]==x (same as first condition), should be a[mid]>x
        else if (a[mid] > x)
            high = mid - 1;

        else
            low = mid + 1;
    }
    // BUG FIX: if-else was inside while loop, moved outside
    if (flag == 1)
        printf("Element Found at Position %d\n", mid + 1);
    else
        printf("Unsuccessful Search\n");

    return 0;
}
