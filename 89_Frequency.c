// Count frequency of a given character in a string.
#include <stdio.h>

int main()
{
    char str[1000], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to search: ");
    scanf("%c", &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}
