//Program to calculate factorial using recursive function

#include <stdio.h>
long int factorial(int n) {
if (n == 0 || n == 1) {
return 1;
} else {
return n * factorial(n - 1);
}
}

int main() {
int n;
printf("Enter a no.: ");
scanf("%d", &n);

if (n < 0) {
printf("Please enter a non-negative integer.\n");
return 1; 
}

long result = factorial(n);
printf("Factorial of %d = %ld\n", n, result);
return 0;

}