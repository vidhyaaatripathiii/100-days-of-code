#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter student %d details:\n", i + 1);

        printf("Name: ");
        scanf("%s", name);

        printf("Roll number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("\nStudent Records:\n");

    while(fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %d\n", marks);
    }

    fclose(fp);

    return 0;
}