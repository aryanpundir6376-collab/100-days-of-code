// Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Total sum from 1 to n
    long long total = (long long)n * (n + 1) / 2;

    int pivot = -1;

    for (int x = 1; x <= n; x++)
    {
        long long leftSum = (long long)x * (x + 1) / 2;          // sum 1 to x
        long long rightSum = total - (long long)(x - 1) * x / 2; // sum x to n

        if (leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("Pivot integer = %d\n", pivot);

    return 0;
}
