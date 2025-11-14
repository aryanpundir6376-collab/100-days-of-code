// Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number.\n");
    scanf("%d", &n);
    int temp = n;
    int dig, fact = 1, sum = 0;

    while (temp != 0)
    {
        dig = temp % 10;

        for (int i = 1; i <= dig; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        fact = 1;

        temp = temp / 10;
    }
    if (sum == n)
        printf("Strong Number.\n");
    else
        printf("Not a Strong Number. \n");

    return 0;
}
