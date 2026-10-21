#include <stdio.h>

int main()
{
    int n, x, i;
    int left, right;
    int ans = -1;

    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        left = 0;
        right = 0;

        for(i = 1; i <= x; i++)
        {
            left = left + i;
        }

        for(i = x; i <= n; i++)
        {
            right = right + i;
        }

        if(left == right)
        {
            ans = x;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}