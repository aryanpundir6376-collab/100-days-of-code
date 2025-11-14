//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number.\n");
    scanf("%d", &n);
    int rem;
    int sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("Sum of the digits : %d",sum);
    return 0;
}