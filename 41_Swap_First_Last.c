//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number.\n");
    scanf("%d", &n);

    int temp = n;
    int first, last;
    int c = 0;
    int rem;
    while (temp != 0)
    {
        temp = temp / 10;
        c++;
    }

    last = n % 10;
    first = n / (int)(pow(10, c - 1));

    int newnum = 0;
    int t = 1;
    for (int i = 1; i <= c; i++)
    {
        if (i == 1)
            rem = first;

        else if (i == c)
            rem = last;

        else
            rem = n % 10;

        newnum = newnum + rem * t;
        t = t * 10;

        n = n / 10;
    }
    printf("Number after swapping first and last digit of a number is : %d .", newnum);

    return 0;
}