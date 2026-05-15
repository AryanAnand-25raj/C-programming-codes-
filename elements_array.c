#include <stdio.h>

int main()
{
    int a[100], n, i, sum=0;

    printf("Enter the number of elements");
    scanf("%d",&n);

    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum = sum +a[i];
    }
    printf("The Sum of the array of the given elements %d\n",sum);
    return 0;
}