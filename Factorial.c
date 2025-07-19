#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    if (isPrime(n))
    {
        printf("%d is a prime number.\n", n);
        printf("Factorial of %d: %lld\n", n, factorial(n));
    }
    else
    {
        printf("%d is not a prime number.\n", n);
        int sum = (n * (n + 1)) / 2;
        printf("Sum of numbers from 1 to %d: %d\n", n, sum);
    }

    return 0;
}