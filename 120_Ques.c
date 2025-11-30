// Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    int start = 1;

    for (int i = 0; i < len; i++)
    {
        if (start && isalpha(str[i]))
        {
            str[i] = toupper(str[i]);
            start = 0;
        }
        else
        {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            start = 1; 
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
