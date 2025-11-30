// Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>

int main()
{
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: File does not exist.\n");
        return 1;
    }

    char c;
    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }

    fclose(fp);
    return 0;
}
