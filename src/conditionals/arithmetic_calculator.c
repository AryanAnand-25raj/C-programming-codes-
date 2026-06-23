#include <stdio.h>

int main(void)
{
    char operator;
    float num_1, num_2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Leading space skips leftover whitespace.

    printf("Enter the value of num_1: ");
    scanf("%f", &num_1);

    printf("Enter the value of num_2: ");
    scanf("%f", &num_2);

    printf("\n");

    switch(operator)
    {
        case '+':
            printf("Addition: %.2f + %.2f = %.2f\n", num_1, num_2, num_1 + num_2);
            break;

        case '-':
            printf("Subtraction: %.2f - %.2f = %.2f\n", num_1, num_2, num_1 - num_2);
            break;

        case '*':
            printf("Multiplication: %.2f * %.2f = %.2f\n", num_1, num_2, num_1 * num_2);
            break;

        case '/':
            if (num_2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Division: %.2f / %.2f = %.2f\n", num_1, num_2, num_1 / num_2);
            break;

        default:
            printf("'%c' is an invalid operator.\n", operator);
    }

    return 0;
}
