//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number.\n");
    scanf("%d", &n);
     
    int sum=0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        sum=sum+i;
    }
    if(sum==n)
    printf("Perfect Number.\n");
    else
    printf("Not a Perfect Number. \n");

    return 0;
    
}