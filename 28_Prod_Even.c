//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n, prod=1, c = 0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (int i = 1;i<=n ; i++)
    {
        if (i % 2 == 0)
        prod=prod*i;
    }
    printf("Product = %d ",prod);
    
    return 0;
}