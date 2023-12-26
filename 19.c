//Write a program to implement linear search in a 1-D array.

#include <stdio.h>
int linearSearch(int array[], int size, int n) {
for (int i = 0; i < size; i++) {
if (array[i] == n) {
return i; 
}
}
return 1; 
}

int main() {
int array[100], size, n;

printf("Enter the size of the array: ");
scanf("%d", &size);

printf("Enter the elements of the array:\n");
for (int i = 0; i < size; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &array[i]);
}

printf("Enter the no. to search: ");
scanf("%d", &n);

int result = linearSearch(array, size, n);

if (result != 1) {
printf("No. found at index: %d\n", result);
} 

else {
printf("No. not found in the array.\n");
}
return 0;
}