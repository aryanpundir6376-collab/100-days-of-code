/*
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j>1;j--)
        {
            printf(" ");
        }
        for(int k=i;k<=5;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}