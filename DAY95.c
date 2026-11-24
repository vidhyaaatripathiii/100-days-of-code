#include <stdio.h>

struct Student
{
    char name[20];
    int roll_no;
    float marks;
};

struct Student findTop(struct Student s[], int n)
{
    int i;
    struct Student top;

    top = s[0];

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > top.marks)
        {
            top = s[i];
        }
    }

    return top;
}

int main()
{
    struct Student s[3], top;
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    top = findTop(s, 3);

    printf("\nTop Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}