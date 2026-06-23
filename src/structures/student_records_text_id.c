#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define TEXT_LENGTH 50

struct Student
{
    char id[TEXT_LENGTH];
    char name[TEXT_LENGTH];
    int age;
    float total_marks;
};

static int read_line(char *destination, size_t size)
{
    if (fgets(destination, (int)size, stdin) == NULL)
    {
        return 0;
    }

    destination[strcspn(destination, "\n")] = '\0';
    return 1;
}

int main(void)
{
    struct Student students[MAX_STUDENTS];
    int count;

    printf("Enter the number of students (1-%d): ", MAX_STUDENTS);
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_STUDENTS)
    {
        fprintf(stderr, "Invalid number of students.\n");
        return 1;
    }
    getchar();

    for (int i = 0; i < count; i++)
    {
        printf("\n--- Student %d ---\n", i + 1);

        printf("Student ID: ");
        if (!read_line(students[i].id, sizeof students[i].id))
        {
            return 1;
        }

        printf("Student name: ");
        if (!read_line(students[i].name, sizeof students[i].name))
        {
            return 1;
        }

        printf("Age: ");
        if (scanf("%d", &students[i].age) != 1)
        {
            fprintf(stderr, "Invalid age.\n");
            return 1;
        }

        printf("Total marks: ");
        if (scanf("%f", &students[i].total_marks) != 1)
        {
            fprintf(stderr, "Invalid marks.\n");
            return 1;
        }
        getchar();
    }

    printf("\n%-12s %-24s %-5s %-10s\n", "ID", "Name", "Age", "Marks");
    printf("--------------------------------------------------------\n");
    for (int i = 0; i < count; i++)
    {
        printf("%-12s %-24s %-5d %-10.2f\n",
               students[i].id,
               students[i].name,
               students[i].age,
               students[i].total_marks);
    }

    return 0;
}
