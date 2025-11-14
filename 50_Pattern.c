/*
Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j<5;j++)
        {
            printf(" ");
        }
        for(int k=i;k>=1;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}