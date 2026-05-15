#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter the Value of Number:\n");
    scanf("%d",&num);
    printf("\n");

    int i=1;
    int sum=0;

    while (i<=num)
    {
    sum = sum + i;
    i++;
    }
    printf("Sum of all Numbers upto: %d: %d",num,sum);
}