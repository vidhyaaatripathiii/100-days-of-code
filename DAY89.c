#include <stdio.h>

enum Gender
{
    MALE = 1,
    FEMALE
};

struct Person
{
    char name[20];
    enum Gender gender;
};

int main()
{
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (1 for Male, 2 for Female): ");
    scanf("%d", &p.gender);

    printf("Name: %s\n", p.name);

    if(p.gender == MALE)
        printf("Gender: Male");
    else if(p.gender == FEMALE)
        printf("Gender: Female");
    else
        printf("Invalid gender");

    return 0;
}