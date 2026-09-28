/*
Q96 (Strings)
Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>

int main()
{
    char str[200];
    int i, j, start;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    start = 0;

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            j = i - 1;

            while(start < j)
            {
                temp = str[start];
                str[start] = str[j];
                str[j] = temp;

                start++;
                j--;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
        {
            break;
        }
    }

    printf("Result: %s", str);

    return 0;
}