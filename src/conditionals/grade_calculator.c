#include <stdio.h>

int main(void)
{
    float sub_1, sub_2, sub_3, sub_4, sub_5;

    printf("Enter the marks (out of 100)\n");

    printf("Enter the value of sub_1: ");
    scanf("%f", &sub_1);

    printf("Enter the value of sub_2: ");
    scanf("%f", &sub_2);

    printf("Enter the value of sub_3: ");
    scanf("%f", &sub_3);

    printf("Enter the value of sub_4: ");
    scanf("%f", &sub_4);

    printf("Enter the value of sub_5: ");
    scanf("%f", &sub_5);

    // Calculate the average mark across all subjects.
    float percentage = (sub_1 + sub_2 + sub_3 + sub_4 + sub_5) / 5;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90 && percentage <= 100)
        printf("Grade is A\n");
    else if (percentage >= 80 && percentage <= 90)
        printf("Grade is B\n");
    else if (percentage >= 70 && percentage <= 80)
        printf("Grade is C\n");
    else if (percentage >= 60 && percentage <= 70)
        printf("Grade is D\n");
    else
        printf("Grade is F\n");

    return 0;
}
