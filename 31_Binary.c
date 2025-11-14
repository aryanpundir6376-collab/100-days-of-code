//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number .\n");
    scanf("%d", &n);
    int rem;
    int pos = 1;
    int bn = 0;
    while (n != 0)
    {
        rem = n % 2;
        bn = bn + (rem * pos);
        n = n / 2;
        pos = pos * 10;
    }

    printf("Binary equivalent of a number : %d", bn);
    return 0;
}