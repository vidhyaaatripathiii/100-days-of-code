#include <stdio.h>

int main()
{
    int n, i, j, k;

    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        for(k = n; k > i; k--)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}