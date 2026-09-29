// Q101 (Logic Enhancers)
// Write a program to take a sorted array (say nums[]) and an integer (say target)
// as inputs. The elements in the sorted array might be repeated.
// Print the first and last occurrence of the target and print the index of
// first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int first = -1, last = -1;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of sorted array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    // Finding first occurrence
    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            first = i;
            break;
        }
    }

    // Finding last occurrence
    for(i = n - 1; i >= 0; i--)
    {
        if(nums[i] == target)
        {
            last = i;
            break;
        }
    }

    if(first == -1)
    {
        printf("-1, -1\n");
    }
    else
    {
        printf("First occurrence of %d is at index %d\n", target, first);
        printf("Last occurrence of %d is at index %d\n", target, last);
    }

    return 0;
}