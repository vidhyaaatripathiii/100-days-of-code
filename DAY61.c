#include <stdio.h>

int main()
{
    int a[100], n, k;
    int i, j, negative;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    for(i = 0; i <= n - k; i++)
    {
        negative = 0;

        for(j = i; j < i + k; j++)
        {
            if(a[j] < 0)
            {
                negative = a[j];
                break;
            }
        }

        printf("%d", negative);

        if(i != n - k)
        {
            printf(" ");
        }
    }

    return 0;
}