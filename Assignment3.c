#include <stdio.h>

int main()
{
    int i, j, a[3][3], b[3][3], sum[3][3], adjoint[3][3];
    float inverse[3][3];

    // First matrix[A]
    printf("Enter 9 entries of 1st matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Second matrix[B]
    printf("Enter 9 entries of 2nd matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Sum([A]+[B])
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Output 
    printf("The sum of two matrices is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Cofactor matrix of A
    adjoint[0][0] = (a[1][1] * a[2][2]) - (a[1][2] * a[2][1]);
    adjoint[0][1] = -((a[1][0] * a[2][2]) - (a[1][2] * a[2][0]));
    adjoint[0][2] = (a[1][0] * a[2][1]) - (a[1][1] * a[2][0]);

    adjoint[1][0] = -((a[0][1] * a[2][2]) - (a[0][2] * a[2][1]));
    adjoint[1][1] = (a[0][0] * a[2][2]) - (a[0][2] * a[2][0]);
    adjoint[1][2] = -((a[0][0] * a[2][1]) - (a[0][1] * a[2][0]));

    adjoint[2][0] = (a[0][1] * a[1][2]) - (a[0][2] * a[1][1]);
    adjoint[2][1] = -((a[0][0] * a[1][2]) - (a[0][2] * a[1][0]));
    adjoint[2][2] = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);

    // Transpose of Cofactor Matrix A
    printf("The Adjoint of 1st matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", adjoint[j][i]);
        }
        printf("\n");
    }
    // Determinant of A
    int det = (a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])) 
            - (a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]))
            + (a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]));

    printf("Determinant = %d\n", det);

    // Inverse of A
    if (det != 0)
    {
        float det_inv = 1.0 / det;

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                inverse[i][j] = (float)(det_inv * adjoint[j][i]);
            }
        }

        printf("The Inverse of the 1st matrix is:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%0.2f\t", inverse[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Singular Matrix so inverse doesn't exist.\n");
    }

    return 0;
}
