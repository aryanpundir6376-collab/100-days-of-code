// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp = fopen("input.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening input.txt\n");
        return 1;
    }

    char c;
    int vowels = 0, consonants = 0;

    while ((c = fgetc(fp)) != EOF)
    {
        if (isalpha(c))
        {
            char lower = tolower(c);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
