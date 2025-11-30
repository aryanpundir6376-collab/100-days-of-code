// Check if a matrix is symmetric.
#include <stdio.h>

int main()
{
    int n, i, j, flag = 1;

    printf("Enter the size of square matrix: ");
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
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                flag = 0;
                break;
            }
        }
        if (!flag)
            break;
    }

    if (flag)
        printf("The matrix is symmetric.");
    else
        printf("The matrix is not symmetric.");

    return 0;
}
