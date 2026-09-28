/*
Q100 (Strings)
Print all sub-strings of a string.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k;
    int length = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    while(str[length] != '\0')
    {
        length++;
    }

    printf("All substrings are:\n");

    for(i = 0; i < length; i++)
    {
        for(j = i; j < length; j++)
        {
            for(k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}