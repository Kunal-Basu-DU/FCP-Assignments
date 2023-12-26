//Program to swap two numbers using third variable and without using third variable
#include <stdio.h>

void swap_with_third_variable(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_without_third_variable(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    swap_with_third_variable(&num1, &num2);
    printf("Swapping with third variable: %d, %d\n", num1, num2);

    swap_without_third_variable(&num1, &num2);
    printf("Swapping without third variable: %d, %d\n", num1, num2);

    return 0;
}
