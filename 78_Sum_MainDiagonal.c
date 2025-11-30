// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("The matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    for (i = 0; i < n; i++)
        sum += matrix[i][i];

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}
