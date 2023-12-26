//Program to calculate the sum of diagonal elements of a 2-D square matrix using a function

#include <stdio.h>

int sum_of_Diagonal(int matrix[10][10], int size) {
int sum = 0;
for (int i = 0; i < size; i++) {
sum += matrix[i][i]; 
}
return sum;
}

int main() {
int matrix[10][10];
int size;

printf("Enter size: ");
scanf("%d", &size);

printf("Enter elements :\n");
for (int i = 0; i < size; i++) {
for (int j = 0; j < size; j++) {
printf("Enter element (%d, %d): ", i + 1, j + 1);
scanf("%d", &matrix[i][j]);
}
}
printf("\nThe entered matrix is:\n");
for (int i = 0; i < size; i++) {
for (int j = 0; j < size; j++) {
printf("%d\t", matrix[i][j]);
}
printf("\n");
}
int diagonal_sum = sum_of_Diagonal(matrix, size);
printf("\nThe sum of diagonal elements is: %d\n", diagonal_sum);
return 0;
}