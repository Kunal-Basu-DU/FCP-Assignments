//Program to illustrate the following basic pointer arithmetic operations.

#include <stdio.h>
int main() {
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *ptr = arr; 

printf("Original value : %d\n", *ptr);
ptr++;
printf("After incrementing : %d\n", *ptr);


ptr--;
printf("After decrementing : %d\n", *ptr);

ptr = arr; 
printf("Original value : %d\n", *ptr);

ptr = ptr + 5;
printf("After adding 5 : %d\n", *ptr);

ptr = ptr - 3;
printf("After subtracting 1 : %d\n", *ptr);

int *ptr2 = arr + 2;
printf("Value at *ptr2: %d\n", *ptr2);
printf("Difference between ptr and ptr2: %ld\n", ptr2 - ptr);

return 0;

}