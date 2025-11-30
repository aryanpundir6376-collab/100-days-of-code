// Reverse a string.
#include <stdio.h>

int main()
{
    char str[1000];
    int i = 0, j, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
        i++;

    j = i - 1;
    i = 0;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s", str);

    return 0;
}
