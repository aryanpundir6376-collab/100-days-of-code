//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int n, prod = 1;
    printf("Enter the number whose factorial is to  be calculated: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        prod = prod * i;
    }
    printf("Factorial = %d ", prod);

    return 0;
}