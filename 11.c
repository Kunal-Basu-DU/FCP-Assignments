//Program to add two matrices
#include <stdio.h>

void add_matrices(int rows, int columns, int matrix1[rows][columns], int matrix2[rows][columns], int result[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void input_matrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element  (%d, %d): ", i + 1, j + 1);
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
    int rows, columns;

    // Matrix
    printf("Enter total rows : ");
    scanf("%d", &rows);
    printf("Enter total columns : ");
    scanf("%d", &columns);

    int matrix1[rows][columns], matrix2[rows][columns], result_matrix[rows][columns];

    // Input first matrix
    printf("Enter elements for the first matrix:\n");
    input_matrix(rows, columns, matrix1);

    // Input second matrix
    printf("Enter elements for the second matrix:\n");
    input_matrix(rows, columns, matrix2);

    // Sum matrices
    add_matrices(rows, columns, matrix1, matrix2, result_matrix);

    // Result
    printf("\nResultant Matrix:\n");
    display_matrix(rows, columns, result_matrix);

    return 0;
}
