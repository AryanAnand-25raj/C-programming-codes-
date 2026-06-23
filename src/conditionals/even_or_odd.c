#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter  the value of the number:");
    scanf("%d",&num);

    printf("\n");

    if(num%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}
