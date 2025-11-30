// Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main()
{
    int n, i, j, flag = 1;

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
    {
        for (j = i + 1; j < n; j++)
        {
            if (matrix[i][i] == matrix[j][j])
            {
                flag = 0;
                break;
            }
        }
        if (!flag)
            break;
    }

    if (flag)
        printf("All diagonal elements are distinct.");
    else
        printf("Diagonal elements are not distinct.");

    return 0;
}
