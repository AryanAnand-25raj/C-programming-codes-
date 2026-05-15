#include <stdio.h>

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int i = 1;
    int Sum_even = 0;
    int Sum_odd = 0;

    while (i <= n) {
        if (i % 2 == 0) {
            Sum_even = Sum_even + i;
        } else {
            Sum_odd = Sum_odd + i;
        }
        i++;
    }

    printf("Sum of even numbers up to %d = %d\n", n, Sum_even);
    printf("Sum of odd numbers up to %d = %d\n", n, Sum_odd);

    return 0;
}