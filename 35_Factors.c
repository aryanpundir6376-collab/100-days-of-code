//Write a program to print all factors of a given number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number.\n");
    scanf("%d", &n);
     
    printf("Factors of %d are : \n",n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        printf("%d \n",i);
    }
    
}