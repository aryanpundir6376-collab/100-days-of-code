// Search for an element in an array using linear search.
#include <stdio.h>

int main()
{
    int n, i, s, f = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &s);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            f = 1;
            break;
        }
    }

    if (f)
        printf("Element found ");
    else
        printf("Element not found");

    return 0;
}
