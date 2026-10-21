#include <stdio.h>

int main()
{
    int a[100], n, i;
    int expectedSum, actualSum = 0;
    int missing;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        actualSum = actualSum + a[i];
    }

    expectedSum = n * (n + 1) / 2;

    missing = expectedSum - actualSum;

    printf("%d", missing);

    return 0;
}