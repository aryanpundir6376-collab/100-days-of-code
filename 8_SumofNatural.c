#include <stdio.h>
int main()
{
    int n ;
    printf("ENTER THE VALUE OF n :\n");
    scanf("%d",&n);
    int sum=0;
    sum=n*(n+1)/2;
    //for(int i=1;i<=n;i++)
    //sum=sum+i;
    printf("THE SUM OF FIRST %d NATURAL NUMBERS IS: %d \n",n,sum);
    return 0;
}