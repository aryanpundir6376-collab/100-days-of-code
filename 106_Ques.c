// Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], nge[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int stack[n];
    int top = -1;

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--)
    {

        // Pop smaller or equal elements
        while (top != -1 && stack[top] <= arr[i])
        {
            top--;
        }

        // If stack empty → No greater element
        if (top == -1)
            nge[i] = -1;
        else
            nge[i] = stack[top];

        // Push current element into stack
        stack[++top] = arr[i];
    }

    // Print Next Greater Elements
    printf("Next Greater Elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d → %d\n", arr[i], nge[i]);
    }

    return 0;
}
