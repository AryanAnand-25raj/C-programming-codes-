#include <stdio.h>
#include <string.h>   // for strcspn

// ─── Structure Definition ───────────────────────────────────────────
struct Student {
    char   student_id[50];
    char  student_name[50];
    int   student_age;
    float total_marks;
};

// ─── Main ────────────────────────────────────────────────────────────
int main()
{
    int n, i;

    // Step 1: Read number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();   // consume leftover newline

    // Step 2: Declare array of n structures
    struct Student s[n];

    // Step 3: Input loop
    for (i = 0; i < n; i++)
    {
        printf("\n--- Enter details of Student %d ---\n", i + 1);

        printf("Student ID   : ");
        gets(s[i].student_id); //gets is used here to read the student ID as a string, allowing for IDs that may contain letters or special characters.
    

        printf("Student Name : ");
        gets(s[i].student_name);

        printf("Age          : ");
        scanf("%d", &s[i].student_age);
        getchar(); // getchar is used to consume the newline character left in the input buffer after reading the age, ensuring that the next input operation works correctly.

        printf("Total Marks  : ");
        scanf("%f", &s[i].total_marks);
        getchar();
    }  
 
    // Step 4: Display all records in tabular form
    printf("\n");
    printf("==============================================\n");
    printf("             STUDENT RECORDS                  \n");
    printf("==============================================\n");
    printf("%-6s  %-20s  %-5s  %-10s\n","ID", "Name", "Age", "Marks");
    printf("----------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%-6s  %-20s  %-5d  %-10.2f\n",s[i].student_id,s[i].student_name,s[i].student_age,s[i].total_marks);
    }

    printf("==============================================\n");

    return 0;
}