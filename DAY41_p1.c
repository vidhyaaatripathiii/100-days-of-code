#include <stdio.h>  
int main(void)
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("Length of the string is: %d\n", length - 1); // Subtracting 1 to exclude the newline character
    return 0;
}