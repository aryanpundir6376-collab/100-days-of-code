// Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    char c;
    int inWord = 0;

    while ((c = fgetc(fp)) != EOF)
    {
        characters++;

        if (c == '\n')
            lines++;

        if (isspace(c))
            inWord = 0;
        else if (!inWord)
        {
            inWord = 1;
            words++;
        }
    }

    if (characters > 0 && c == EOF && characters > 0)
        lines++; // To count the last line if not ending with newline

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
