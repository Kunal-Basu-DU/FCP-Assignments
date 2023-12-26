//Program to demonstrate call by reference using pointers in functions

#include <stdio.h>
void swap(int *a, int *b);
int main() {
int n1, n2;

printf("Enter the value for num1: ");
scanf("%d", &n1);

printf("Enter the value for num2: ");
scanf("%d", &n2);

printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);

swap(&n1, &n2);

printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
return 0;
}

void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}