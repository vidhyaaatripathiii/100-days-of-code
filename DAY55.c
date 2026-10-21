#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int count, ans = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            ans = a[i];
            break;
        }
    }

    printf("%d", ans);

    return 0;
}