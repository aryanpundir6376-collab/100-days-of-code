//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter two number.\n");
    scanf("%d%d",&m,&n);
    int lcm;
    int max=(m>n)?m:n;

    while(1)
    {
        if(max%m==0 && max%n==0)
        {
            printf("LCM = %d",max);
            break;
        }
        max++;
    }
    return 0;
}