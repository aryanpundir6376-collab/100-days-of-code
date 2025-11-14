// Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n.\n");
    scanf("%d", &n);
    int c = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                c++;
        }
        if (c == 2)
            printf("%d ", i);

        c = 0;
    }
    return 0;
}