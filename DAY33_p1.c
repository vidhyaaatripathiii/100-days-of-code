//Find the digit occurring most times in an integer

#include <stdio.h>

int main()
{
    int n, temp, digit;
    int i, count, max = 0, result = 0;

    scanf("%d", &n);

    for(i = 0; i <= 9; i++)
    {
        temp = n;
        count = 0;

        while(temp > 0)
        {
            digit = temp % 10;

            if(digit == i)
            {
                count++;
            }

            temp = temp / 10;
        }

        if(count > max)
        {
            max = count;
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}