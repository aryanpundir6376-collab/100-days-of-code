/*

Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=7;i=i+2)
    {
        for(int j=i;j<7;j=j+2)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=5;i>=1;i=i-2)
    {
        for(int j=i;j<7;j=j+2)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}