#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[50], destinationFile[50];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destinationFile);

    source = fopen(sourceFile, "r");

    if(source == NULL)
    {
        printf("Source file could not be opened.");
        return 1;
    }

    destination = fopen(destinationFile, "w");

    if(destination == NULL)
    {
        printf("Destination file could not be opened.");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.");

    return 0;
}