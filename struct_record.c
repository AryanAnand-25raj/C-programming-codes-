#include <stdio.h>
#include <string.h>   // for strcspn

struct student
{
    int Id;
    char name[50];
    int age;
    float marks;
};

int main()
{
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();

    struct student s[n];

    // Input details of students
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Details of Student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &s[i].Id);
        getchar();

        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = 0;

        printf("Age: ");
        scanf("%d", &s[i].age);
        getchar();

        printf("Marks: ");
        scanf("%f", &s[i].marks);
        getchar();
    }

    // Display student records
    printf("\n----------Student Records------------\n");
    printf("%-5s %-20s %-5s %-6s\n", "ID", "Name", "Age", "Marks");
    printf("--------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%-5d %-20s %-5d %-6.2f\n",s[i].Id, s[i].name, s[i].age, s[i].marks);
    }

    return 0;
}