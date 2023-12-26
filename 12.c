//Program to multiply two matrices

#include <stdio.h>

void multiply_matrices(int rows1, int columns1, int matrix1[rows1][columns1],
                       int rows2, int columns2, int matrix2[rows2][columns2],
                       int result[rows1][columns2]) {
    if (columns1 != rows2) {
        printf("Error \n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void input_matrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element at  (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void display_matrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, columns1, rows2, columns2;

    // First matrix
    printf("Enter rows for 1st Matrix : ");
    scanf("%d", &rows1);
    printf("Enter columns for 1st Matrix : ");
    scanf("%d", &columns1);

    // Second matrix
    printf("Enter rows for 2nd Matrix : ");
    scanf("%d", &rows2);
    printf("Enter columns for 2nd Matrix  : ");
    scanf("%d", &columns2);

    int matrix1[rows1][columns1], matrix2[rows2][columns2], result_matrix[rows1][columns2];

    // Input first matrix
    printf("Enter elements 1st Matrix :\n");
    input_matrix(rows1, columns1, matrix1);

    // Input for the second matrix
    printf("Enter elements 2nd Matrix : \n");
    input_matrix(rows2, columns2, matrix2);

    // Multiply matrices
    multiply_matrices(rows1, columns1, matrix1, rows2, columns2, matrix2, result_matrix);

    // Result
    printf("\nResultant Matrix:\n");
    display_matrix(rows1, columns2, result_matrix);

    return 0;
}
