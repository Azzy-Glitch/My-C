#include <stdio.h>

int main()
{
    int n, i;
    int evens[100], odds[100];
    int evenCount = 0, oddCount = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evens[evenCount++] = i;
        }
        else
        {
            odds[oddCount++] = i;
        }
    }

    printf("Even numbers up to %d: ", n);
    for (i = 0; i < evenCount; i++)
    {
        printf("%d ", evens[i]);
    }
    printf("\n");

    printf("Odd numbers up to %d: ", n);
    for (i = 0; i < oddCount; i++)
    {
        printf("%d ", odds[i]);
    }
    printf("\n");

    return 0;
}