//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);

    if(n>0)
    printf("NUMBER IS POSITIVE /n");

    else if (n==0)
    printf ("NUMBER IS ZERO \n");

    else
    printf("NUMBER IS NEGATIVE \n");

    return 0;


}
