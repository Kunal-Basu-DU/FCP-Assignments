//Program to find average, maximum element, minimum element of an array
#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid entry\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    long sum = 0;
    long max = LONG_MIN;
    long min = LONG_MAX;

    for (int i = 0; i < n; ++i) {
        sum += arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    double average = (double)sum / n;

    printf("Average: %.2f\n", average);
    printf("Maximum element: %ld\n", max);
    printf("Minimum element: %ld\n", min);

    return 0;
}
