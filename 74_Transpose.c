// Find the transpose of a matrix.
#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transpose[cols][rows];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("The matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];

    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
