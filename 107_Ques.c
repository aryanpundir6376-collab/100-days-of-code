// Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], pge[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int stack[n];
    int top = -1;

    for (int i = 0; i < n; i++)
    {

        while (top != -1 && stack[top] <= arr[i])
        {
            top--;
        }

        if (top == -1)
            pge[i] = -1;
        else
            pge[i] = stack[top];

        stack[++top] = arr[i];
    }

    printf("Previous Greater Elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d → %d\n", arr[i], pge[i]);
    }

    return 0;
}
