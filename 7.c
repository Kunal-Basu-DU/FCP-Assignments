//Program to find largest element of an array
#include <stdio.h>
#include<limits.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid entry\n");
    }

    int arr[size];

    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element is : %d\n", largest);

    return 0;
}
