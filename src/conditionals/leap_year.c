#include <stdio.h>
int main(void)
{
    int year;

    printf("Enter the value of year:");
    scanf("%d",&year);

    printf("\n");

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
    return 0;
}
