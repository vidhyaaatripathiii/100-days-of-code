/*
Q102 (Logic Enhancers)

Write a program to take a sorted array arr[] and an integer x as input,
find the index (0-based) of the smallest element in arr[] that is
greater than or equal to x and print it.

This element is called the ceil of x.
If no such element exists, print -1.
In case of multiple occurrences of ceil of x, return the index
of the first occurrence.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, x;
    int i, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d\n", index);

    return 0;
}