//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main()
{
    int n, sum = 0, c = 0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for (int i = 1; ; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
            c++;
        }
        if(c==n)
        break;
    }
    printf("Sum = %d ", sum);
    return 0;
}