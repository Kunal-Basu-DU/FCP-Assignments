//Program to allocate memory dynamically for a 1-D array using malloc.

#include <stdio.h>
#include <stdlib.h>
int main() {
int *a;
int size;

printf("Enter the size of the array: ");
scanf("%d", &size);

a = (int *)malloc(size * sizeof(int));

if (a == NULL) {
printf("Failed \n");
return 1; 
}

printf("Enter %d elements :\n", size);
for (int i = 0; i < size; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &a[i]);
}

printf("Elements of the dynamically allocated array:\n");
for (int i = 0; i < size; i++) {
printf("%d ", a[i]);
}

printf("\n");

free(a);
return 0;
}