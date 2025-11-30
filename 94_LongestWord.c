// Find the longest word in a sentence.
#include <stdio.h>

int main()
{
    char str[1000], longest[1000];
    int i = 0, len = 0, maxLen = 0, start = 0, maxStart = 0;
    printf("ENTER A SENTENCE.\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if (len > maxLen)
            {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }
        i++;
    }

    for (i = 0; i < maxLen; i++)
        longest[i] = str[maxStart + i];
    longest[maxLen] = '\0';

    printf("Longest word: %s", longest);

    return 0;
}
