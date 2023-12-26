//Program to calculate nCr

#include <stdio.h>
int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, r, diff;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Enter r : ");
    scanf("%d", &r);

    int ncr = fact(n) / (fact(r) * fact(n - r));
    printf("%d", ncr);
    
    return 0;
}
