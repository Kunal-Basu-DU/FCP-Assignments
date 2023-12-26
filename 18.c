// Program to create a multi-level menu using switch cases that perform various basic mathematical
// operations (Add, Subtract, Divide, Multiply, Exponent).

#include <stdio.h>
#include <math.h>
int main() {
int choice;
double num1, num2;

do {
printf("1. Add\n");
printf("2. Subtract\n");
printf("3. Multiply\n");
printf("4. Divide\n");
printf("5. Exponent\n");
printf("0. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice) {
case 1:
printf("Enter two numbers to add: ");
scanf("%lf %lf", &num1, &num2);
printf("Result: %.2lf\n", num1 + num2);
break;

case 2:
printf("Enter two numbers to subtract: ");
scanf("%lf %lf", &num1, &num2);
printf("Result: %.2lf\n", num1 - num2);
break;

case 3:
printf("Enter two numbers to multiply: ");
scanf("%lf %lf", &num1, &num2);
printf("Result: %.2lf\n", num1 * num2);
break;

case 4:
printf("Enter two numbers to divide: ");
scanf("%lf %lf", &num1, &num2);
if (num2 != 0) {
printf("Result: %.2lf\n", num1 / num2);
} else {
printf("Error: Division by zero!\n");
}
break;

case 5:
printf("Enter base and exponent: ");
scanf("%lf %lf", &num1, &num2);
printf("Result: %.2lf\n", pow(num1, num2));
break;

case 0:
printf("Exit\n");
break;

default:
printf("Invalid choice\n");
}

} while (choice != 0);
return 0;

}