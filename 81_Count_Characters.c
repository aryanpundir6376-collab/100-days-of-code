// Count characters in a string without using built-in length functions.
#include <stdio.h>

int main()
{
    char str[1000];
    int count = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("Number of characters = %d", --count);

    return 0;
}
