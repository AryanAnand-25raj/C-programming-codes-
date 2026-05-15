#include <stdio.h>

int main()
{
    int arr[100], x, n, i, flag = 0;

    printf("Enter the Number of Elements: ");
    scanf("%d", &n);

    printf("\nEnter the Elements of the Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the Element a[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // BUG FIX: removed duplicate input loop that was overwriting the array

    printf("\nEnter the Element to be Searched: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = 1;
            // BUG FIX: added break to store correct position in i
            break;
        }
    }

    if (flag == 1)
        printf("Element Found at Position %d\n", i + 1);
    else
        printf("Unsuccessful Search\n");

    return 0;
}
