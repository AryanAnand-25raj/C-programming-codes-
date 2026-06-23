#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Enter the value of A:");
    scanf("%d",&a);

    printf("Enter the value of B:");
    scanf("%d",&b);

    printf("Enter the value of C:");
    scanf("%d",&c);

    printf("\n");

    //By using the if else statement and logical operator

    printf("By using the if else statement ");

    if(a>b && a>c)
    {
        printf("A is the greatest number");
    return 0;
}
    else if (b>a && b>c)
    {
        printf("B is Greatest");
    }
        else
        {
            printf("C is Greatest");
        }
    }

