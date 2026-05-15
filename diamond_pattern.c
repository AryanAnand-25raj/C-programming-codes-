#include <stdio.h>

int main()
{
    int n=5;

    //First Outer Loop to iterate through each rows 

    for (int i=0;i<2*n-1;i++)
    {
        //assigning value of the comparator according to 

        //the row number 

        int comp;

        if(i<n)
        {
            comp=2* ( n-i )-1; 
        }
        else
        {
            comp=2*(i-n+1)+1;
        }
        //First Number to print leading whitespaces

        for (int j=0;j<comp;j++)
        {
            printf(" ");
        }
        //second inner loop to print num
        for(int k=0;k<2*n-comp;k++)
        {
            
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}