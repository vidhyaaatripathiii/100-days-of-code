#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int count1[26] = {0};
    int count2[26] = {0};
    int i, flag = 1;

    scanf("%s", s);
    scanf("%s", t);

    if(strlen(s) != strlen(t))
    {
        flag = 0;
    }
    else
    {
        for(i = 0; s[i] != '\0'; i++)
        {
            count1[s[i] - 'a']++;
            count2[t[i] - 'a']++;
        }

        for(i = 0; i < 26; i++)
        {
            if(count1[i] != count2[i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not Anagram");
    }

    return 0;
}