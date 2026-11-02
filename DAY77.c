#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[50];
    char ch;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("File does not exist or cannot be opened.");
        return 1;
    }

    printf("\nFile contents:\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}