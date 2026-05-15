#include <stdio.h>

int main()
{
    int rows = 5;
    //First Loop to Print all rows

    for(int i=0;i<rows;i++)
    {
        //first inner loop to print in each row
    for(int j=0;j<rows-i;j++)
    {
        printf("%c ", 'A' + j);
    }
    printf("\n");
    }
}