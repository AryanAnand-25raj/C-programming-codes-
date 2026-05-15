#include <stdio.h>
#include <math.h>

int main()
{
    float p_amount, rate, time;
    float simple_interest, compound_interest, amount;

    printf("Enter the Principal Amount: ");
    scanf("%f", &p_amount);

    printf("Enter the Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter the Time (in years): ");
    scanf("%f", &time);

    simple_interest = (p_amount * rate * time) / 100;

    amount = p_amount * pow((1 + rate / 100), time);
    compound_interest = amount - p_amount;

    printf("\nSimple Interest = %.2f", simple_interest);
    printf("\nCompound Interest = %.2f", compound_interest);

   
}
