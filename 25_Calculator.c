//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    int m,n,ans=0;
    char o;
    printf("Enter your choice.\n");
    scanf("%d%d %c",&m,&n,&o);

    switch(o)
    {
    case '+':
    {
        ans=m+n;
        break;
    }
    case '-':
    {
        ans=m-n;
        break;
    }
    case '*':
    {
        ans=m*n;
        break;
    }
    case '/':
    {
        ans=m/n;
        break;
    }
    case '%':
    {
        ans=m%n;
        break;
    }
    default:
    {
        printf("Invalid Input.\n");
        break;
    }
    }
    printf("ANSWER = %d",ans);

    return 0;
}