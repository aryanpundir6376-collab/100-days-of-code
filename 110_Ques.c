// Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
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

    if (k > n || k <= 0)
    {
        printf("Invalid k\n");
        return 0;
    }

    int dq[n];
    int front = 0, back = -1;

    for (int i = 0; i < k; i++)
    {
        while (back >= front && arr[dq[back]] <= arr[i])
            back--;
        dq[++back] = i;
    }

    for (int i = k; i < n; i++)
    {
        printf("%d ", arr[dq[front]]);

        while (front <= back && dq[front] <= i - k)
            front++;

        while (back >= front && arr[dq[back]] <= arr[i])
            back--;

        dq[++back] = i;
    }

    printf("%d\n", arr[dq[front]]);

    return 0;
}
