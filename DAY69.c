#include <stdio.h>

int main()
{
    int a[100], seen[1000] = {0};
    int n, i;
    int repeated = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(seen[a[i]] == 1)
        {
            repeated = a[i];
            break;
        }
        else
        {
            seen[a[i]] = 1;
        }
    }

    printf("%d", repeated);

    return 0;
}