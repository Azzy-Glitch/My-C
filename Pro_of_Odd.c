#include <stdio.h>

int main()
{
    int n, i;
    long long product = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            product *= i;
        }
    }

    printf("Product of odd numbers from 1 to %d: %lld\n", n, product);

    return 0;
}