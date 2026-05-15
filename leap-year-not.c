#include <stdio.h>
#include <conio.h>

void main()
{
    int year;

    printf("Enter the value of year:");
    scanf("%d",&year);

    printf("\n");

    if((year%4==0) && (year%100!=0) ||(year%400==0))
    {
        printf("This is a Leap year",year);
    }
    else
    {
        printf("This is not a leap year");
    }
}