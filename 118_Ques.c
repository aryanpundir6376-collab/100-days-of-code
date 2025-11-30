// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (numbers from 0 to n except one missing): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    int missing = total - sum;
    printf("Missing number = %d\n", missing);

    return 0;
}
