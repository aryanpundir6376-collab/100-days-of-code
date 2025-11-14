// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number.\n");
    scanf("%d", &n);
    int temp = n, temp1 = n;
    int c = 0;
    int rem;
    double sum = 0.0;

    while (temp != 0)
    {
        temp = temp / 10;
        c++;
    }

    while (temp1 != 0)
    {
        rem = temp1 % 10;
        sum = sum + pow(rem, c);
        temp1 = temp1 / 10;
    }
    if (sum == n)
        printf("Number is armstrong.\n");
    else
        printf("Number is not armstrong.\n");

    return 0;
}