#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("Enter the number of terms:\n ");
    scanf("%d", &n);          // ← actually read n from user

    int PreToPreterm = 0;
    int PreviousTerm = 1;
    int currentTerm = 0;

    printf("Fibonacci series: %d %d", PreToPreterm, PreviousTerm);

    while (i <= (n - 3))
    {
        currentTerm = PreToPreterm + PreviousTerm;
        printf(" %d", currentTerm);   // ← value, not address
        PreToPreterm = PreviousTerm;
        PreviousTerm = currentTerm;
        i++;
    }

    printf("\n");
    return 0;
}