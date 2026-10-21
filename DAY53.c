#include <stdio.h>

int main()
{
    int a[100], n, i;
    int total = 0, left = 0, right;
    int ans = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        total = total + a[i];
    }

    for(i = 0; i < n; i++)
    {
        right = total - left - a[i];

        if(left == right)
        {
            ans = i;
            break;
        }

        left = left + a[i];
    }

    printf("%d", ans);

    return 0;
}