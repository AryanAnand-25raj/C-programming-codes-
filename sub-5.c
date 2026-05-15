#include <stdio.h>
#include <conio.h>
void main()
{
    float sub_1,sub_2,sub_3,sub_4,sub_5;
    printf("Enter the marks (out of 100)--\n");
    printf("Enter the marks for the Subject_1: ");
    scanf("%f",&sub_1);  // Changed %d to %f for float
    printf("Enter the marks for the Subject_2: ");
    scanf("%f",&sub_2);  // Changed %d to %f
    printf("Enter the marks for the Subject_3: ");
    scanf("%f",&sub_3);  // Changed %d to %f
    printf("Enter the marks for the Subject_4: ");
    scanf("%f",&sub_4);  // Changed %d to %f
    printf("Enter the marks for the Subject_5: ");
    scanf("%f",&sub_5);  // Changed %d to %f

    float total=sub_1+sub_2+sub_3+sub_4+sub_5;
    float percentage=total/5;

    printf("\n");
    printf("Total Marks Obtained by a Student: %f\n",total);  // Removed & and added \n
    printf("Total percentage Obtained by a Student: %f\n",percentage);  // Removed & and added \n
}