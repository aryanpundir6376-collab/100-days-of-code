// Multiply two matrices.
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], product[r1][c2];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    printf("The First matrix is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            printf("%d ", mat1[i][j]);
        printf("\n");
    }
    printf("The Second matrix is:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", mat2[i][j]);
        printf("\n");
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            product[i][j] = 0;
            for (k = 0; k < c1; k++)
                product[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

    printf("Product of the matrices:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}
