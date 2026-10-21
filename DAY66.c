#include <stdio.h>

int main()
{
    int a[100], n, target;
    int i, j;
    int first = -1, second = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == target)
            {
                first = i;
                second = j;
                break;
            }
        }

        if(first != -1)
        {
            break;
        }
    }

    printf("%d %d", first, second);

    return 0;
}