#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;
    printf("value of A: is");
    scanf("%d",&a);

    printf("Value of B is :");
    scanf("%d",&b);
    printf("\n");

    if(a==b)
    {
        printf("Value of A and B are Equal");
    }
    else
    {
        printf("value of A and B are not equal");
    }
}