//Program to calculate sum of n numbers
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid entry.\n");
        return 0;
    }

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum is %d", sum);

    return 0;
}
