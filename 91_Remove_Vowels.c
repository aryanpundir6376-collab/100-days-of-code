// Remove all vowels from a string.
#include <stdio.h>
int main()
{
    char str[1000], result[1000];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
    {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
        {
            result[j] = ch;
            j++;
        }
        i++;
    }
    result[j] = '\0';

    printf("String without vowels: %s", result);

    return 0;
}
