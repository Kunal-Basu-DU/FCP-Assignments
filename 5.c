//Program to calculate factorial of a number
#include <stdio.h>

int main() {
    int number;
    long int factorial = 1;

    printf("Enter a integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Invalid entry\n");
        return 0;
    }

    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    printf("Factorial is %li", factorial);

    return 0;
}
