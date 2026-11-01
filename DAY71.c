#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data saved successfully.");

    return 0;
}