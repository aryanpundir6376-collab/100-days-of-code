#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);

    if(n%2==0)
    printf("Number is EVEN \n");
    else
    printf("Number is ODD \n");

    return 0;
}