// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    int q[n];
    int front = 0, back = -1;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
            q[++back] = i;
    }

    for (int i = k; i < n; i++)
    {
        if (front > back)
            printf("0 ");
        else
            printf("%d ", arr[q[front]]);

        while (front <= back && q[front] <= i - k)
            front++;

        if (arr[i] < 0)
            q[++back] = i;
    }

    if (front > back)
        printf("0\n");
    else
        printf("%d\n", arr[q[front]]);

    return 0;
}
