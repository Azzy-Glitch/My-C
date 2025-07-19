#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 0; i < rows / 2; i++)
    {

        for (int j = 0; j < rows / 2 - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        printf("*");
    }
    printf("\n");

    for (int i = rows / 2 - 1; i >= 0; i--)
    {
        for (int j = 0; j < rows / 2 - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}