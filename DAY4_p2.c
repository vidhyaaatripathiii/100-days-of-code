//Write a program for sum of n natural numbers.

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Add all numbers from 1 to n
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
