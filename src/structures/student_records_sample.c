#include <stdio.h>
#include <string.h>

// Define the structure
struct Student
{
    int   student_id;
    char  student_name[50];
    int   student_age;
    float total_marks;
};

int main(void)
{
    // Declare and initialize array of 5 students
    struct Student s[5] = {
        {11, "Ansh Saraswat", 20, 487.5},
        {12, "Aryan Anand",  21, 465.0},
        {13, "Saurav Singh",  19, 390.0},
        {14, "Nikhil Sharma",  22, 510.0},
        {15, "Akshat dogra ",  20, 320.5}
    };

    int n = 5, i;

    // Display tabular header
    printf("\n---------- Student Records ----------\n");
    printf("%-5s  %-20s  %-5s  %-10s\n", "ID", "Name", "Age", "Marks"); // -5s means left align with width 5, -20s means left align with width 20, etc.
    printf("--- ----------------------------------\n");

    // Display each student
    for (i = 0; i < n; i++)
    {
        printf("%-5d  %-20s  %-5d  %-10.2f\n",s[i].student_id,s[i].student_name,s[i].student_age,s[i].total_marks);
    }

    printf("-------------------------------------\n");

    return 0;
}
