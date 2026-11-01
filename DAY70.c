#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }

    str[0] = toupper(str[0]);

    printf("Sentence case: %s", str);

    return 0;
}