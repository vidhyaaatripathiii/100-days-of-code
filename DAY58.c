#include <stdio.h>

int main()
{
    int a[100], answer[100];
    int n, i, j;
    int product;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        product = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                product = product * a[j];
            }
        }

        answer[i] = product;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if(i != n - 1)
        {
            printf(" ");
        }
    }

    return 0;
}