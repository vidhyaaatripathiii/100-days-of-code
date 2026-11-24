#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[20];
    struct Date joiningDate;
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joiningDate.day,
                       &e.joiningDate.month,
                       &e.joiningDate.year);

    printf("\nEmployee Details\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Joining Date: %d/%d/%d\n",
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}