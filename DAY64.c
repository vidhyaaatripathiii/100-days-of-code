#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k;
    int count, maxLength = 0;
    int repeat;

    scanf("%s", s);

    for(i = 0; i < strlen(s); i++)
    {
        count = 0;

        for(j = i; j < strlen(s); j++)
        {
            repeat = 0;

            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1)
            {
                break;
            }

            count++;
        }

        if(count > maxLength)
        {
            maxLength = count;
        }
    }

    printf("%d", maxLength);

    return 0;
}