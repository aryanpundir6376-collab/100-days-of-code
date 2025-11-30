// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *in = fopen("input.txt", "r");
    if (in == NULL)
    {
        printf("Error opening input.txt\n");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL)
    {
        printf("Error creating output.txt\n");
        fclose(in);
        return 1;
    }

    char c;
    while ((c = fgetc(in)) != EOF)
    {
        fputc(toupper(c), out);
    }

    fclose(in);
    fclose(out);

    printf("Text converted to uppercase and saved in output.txt\n");
    return 0;
}
