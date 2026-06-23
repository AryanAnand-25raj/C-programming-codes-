#include <stdio.h>

int main(void)
{
    int rows = 5;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
