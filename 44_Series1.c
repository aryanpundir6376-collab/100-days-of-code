// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
{
    int n;
    double sum = 1.0;
    printf("Enter no. of terms.\n");
    scanf("%d", &n);

    double a=3;
    for ( int i = 2; i<=n; i++)
    {
        sum = sum + (a / (a + 1));
        a=a+2;
    }
    printf("SUM OF THE SERIES : %lf", sum);

    return 0;
}