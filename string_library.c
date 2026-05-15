#include <stdio.h>

int my_strlen(const char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int my_strcpy(char *destination, const char *source)
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    return 0;
}

void my_strcat(char *destination, const char *source)
{
    int i = 0, j = 0;
    while (destination[i] != '\0')
        i++;
    while (source[j] != '\0')
    {
        destination[i] = source[j];
        i++;
        j++;
    }
    destination[i] = '\0';
}

int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

int main()
{
    const char str1[100] = "Aryan:";
    const char str2[100] = "Anand";
    char destination[100];

    printf("Length of str1: %d\n", my_strlen(str1));
    printf("Length of str2: %d\n", my_strlen(str2));

    my_strcpy(destination, str1);
    printf("Copy of the string: %s\n", destination);

    printf("Comparison of str1 and str2: %d\n", my_strcmp(str1, str2));

    my_strcat(destination, str2);
    printf("Concatenation of str1 and str2: %s\n", destination);

    return 0;
}

//Length of str1: 6
//Length of str2: 5
//Copy of the string: Aryan:
//Comparison of str1 and str2: 4
//Concatenation of str1 and str2: Aryan:Anand