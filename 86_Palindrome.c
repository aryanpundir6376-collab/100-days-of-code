// Check if a string is a palindrome.
#include <stdio.h>

int main()
{
    char str[1000];
    int i = 0, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
        i++;

    j = i - 1;
    i = 0;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            printf("Not a palindrome");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome");
    return 0;
}
