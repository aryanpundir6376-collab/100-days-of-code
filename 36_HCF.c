//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter two number.\n");
    scanf("%d%d",&m,&n);
    int hcf;
    int min=(m<n)?m:n;

    for (int i=1;i<=min;i++)
    {
       if(m%i==0 && n%i==0)
       hcf=i;
    }
    printf("HCF = %d",hcf);
    return 0;

}
