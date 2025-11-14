//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number.\n");
    scanf("%d", &n);
    int rem;
    int prod = 1;
    while (n != 0)
    {
        rem = n % 10;
        {
            if(rem%2!=0)
            prod=prod*rem;
        }
        n = n / 10;
    }
    printf("Product of the odd digits of a number : %d",prod);
    return 0;
}