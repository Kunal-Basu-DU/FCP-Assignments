//Program to print odd indexed elements of an array
#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid entry \n");
        return 0;
    }

    int arr[size];

    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Odd indexed elements are : ");
    for (int i = 1; i < size; i += 2) {
        printf("%d ", arr[i]);
    }

    return 0;
}
