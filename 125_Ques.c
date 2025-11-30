// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
#include <string.h>

int main()
{
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar(); // consume leftover newline

    FILE *fp = fopen(filename, "a");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char line[1000];
    printf("Enter text to append: ");
    fgets(line, sizeof(line), stdin);

    fprintf(fp, "%s", line);

    fclose(fp);

    printf("Text appended successfully to %s\n", filename);
    return 0;
}
