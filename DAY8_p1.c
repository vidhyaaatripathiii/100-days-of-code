/*ASCII (american standard code for information interchange) the computer cannot store symbols or letters
 directly,they only understand no.s . The ASCII standard solves this by mapping 128 characters including 
 letters, digits,punctuation and control commands to specific integers ranging from 0 - 127. When u declare 
 a character variable in C, the memory actually stores the int ASCII value rather than the character shape 
 itself. The digits from 0-9 are stored in range 48-57, uppercase letters A-Z are stored in range 65-90 and lowercase letters a-z are stored in range 97-122.
The space character uses ASCII value 32. You can view the visual character by using %c or the numerical 
code using %d that treats the variable as a decimal integer */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("uppercase alphabet");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("lowercase alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("digit");
    }
    else
    {
        printf("Special character");
    }

    return 0;
}

