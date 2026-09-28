/*
Q97 (Strings)
Print the initials of a name.
*/

#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    if(name[0] != ' ' && name[0] != '\n')
    {
        printf("%c", name[0]);
    }

    for(i = 1; name[i] != '\0'; i++)
    {
        if(name[i - 1] == ' ' && name[i] != ' ')
        {
            printf(" %c", name[i]);
        }
    }

    printf("\n");

    return 0;
}