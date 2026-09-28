#include <stdio.h>

int main(void)
{
    char fullName[50];

    printf("Enter your full name: ");

    if (fgets(fullName, sizeof fullName, stdin) == NULL) //stdin is standard input, fgets() reads spaces and limits the character stored.
    {    printf("Input Error.\n");
        return 1;
    }
    fullName[strcspn(fullName, "\n")] = 0;    //finds the first newline and replaces it with null character 
    printf("Your full name is: %s", fullName);
    return 0;
}
