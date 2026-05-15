//Bubble Sort 
//Bubble sort is a simple sorting algorithm that repeatedly steps 
//through the list, compares adjacent elements and swaps them if they are in the wrong order.
#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;

    printf("Enter the Number of Elements: ");
    scanf("%d", &n);  

    printf("\nEnter the Array Elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter Element a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }

    printf("\nSorted Array in Ascending Order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}