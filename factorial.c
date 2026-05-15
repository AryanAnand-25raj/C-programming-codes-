#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter the value of the Number:");
    scanf("%d",&num);

    if(num>=0)
    {
        int i=num;
        int factorial=1;
        while (i>0)
        {
            factorial = factorial * i;
            i--;
        }
        printf("%d! = %d",num,factorial);
    }
    else
    {
        printf("Factorial of negative number doesn't exist");
    }
}