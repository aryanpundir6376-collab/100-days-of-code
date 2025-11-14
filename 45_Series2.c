//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main()
{
    int n;
    double sum = 0.0;
    printf("Enter no. of terms.\n");
    scanf("%d", &n);
    
    double a=2.0,b=3.0;
    for(int i=1;i<=n;i++)
    {
      sum=sum+(a/b);
      a=a+2;
      b=b+4;
    }
    printf("SUM OF THE SERIES : %lf", sum);

    return 0;
}