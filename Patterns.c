#include <stdio.h>

void printDiamond(int rows);
void printMultiplicationTable(int n);
void printSquarePattern(int n);
void printRightAngledTriangle(int rows);
void printInvertedRightAngledTriangle(int rows);
void printPyramid(int rows);
void printInvertedPyramid(int rows);
void printNumberPyramid(int rows);
void printFloydsTriangle(int rows);
void printPascalsTriangle(int rows);

int main()
{
    int choice, rows, n;
    char continueChoice;

    do
    {
        printf("\n===== Pattern Printing Menu =====\n");
        printf("1. Diamond Star Pattern\n");
        printf("2. Multiplication Table Pattern\n");
        printf("3. Square Pattern\n");
        printf("4. Right-Angled Triangle\n");
        printf("5. Inverted Right-Angled Triangle\n");
        printf("6. Pyramid Pattern\n");
        printf("7. Inverted Pyramid Pattern\n");
        printf("8. Number Pyramid Pattern\n");
        printf("9. Floyd's Triangle Pattern\n");
        printf("10. Pascal's Triangle Pattern\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of rows (odd number recommended): ");
            scanf("%d", &rows);
            printDiamond(rows);
            break;
        case 2:
            printf("Enter size of multiplication table: ");
            scanf("%d", &n);
            printMultiplicationTable(n);
            break;
        case 3:
            printf("Enter N (0-5): ");
            scanf("%d", &n);
            printSquarePattern(n);
            break;
        case 4:
            printf("Enter number of rows: ");
            scanf("%d", &rows);
            printRightAngledTriangle(rows);
            break;
        case 5:
            printf("Enter number of rows: ");
            scanf("%d", &rows);
            printInvertedRightAngledTriangle(rows);
            break;
        case 6:
            printf("Enter number of rows: ");
            scanf("%d", &rows);
            printPyramid(rows);
            break;
        case 7:
            printf("Enter number of rows: ");
            scanf("%d", &rows);
            printInvertedPyramid(rows);
            break;
        case 8:
            printf("Enter number of rows: ");
            scanf("%d", &rows);
            printNumberPyramid(rows);
            break;
        case 9:
            printf("Enter number of rows: ");
            scanf("%d", &rows);
            printFloydsTriangle(rows);
            break;
        case 10:
            printf("Enter number of rows: ");
            scanf("%d", &rows);
            printPascalsTriangle(rows);
            break;
        case 0:
            printf("Thank you for using the pattern printer!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

        if (choice != 0)
        {
            printf("\nDo you want to continue? (y/n): ");
            scanf(" %c", &continueChoice);
        }

    } while (choice != 0 && continueChoice == 'y');

    return 0;
}

// Function definitions
void printDiamond(int rows)
{
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
}

void printMultiplicationTable(int n)
{

    printf("    ");
    for (int i = 1; i <= n; i++)
    {
        printf("%4d", i);
    }
    printf("\n    +");
    for (int i = 1; i <= n; i++)
    {
        printf("----");
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        printf("%4d |", i);
        for (int j = 1; j <= n; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

void printSquarePattern(int n)
{
    int size = 6;
    int startX = size - 1 - n;
    int startY = size - 1 - n;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i >= startX && i < startX + n + 1 &&
                j >= startY && j < startY + n + 1)
            {
                printf("* ");
            }
            else
            {
                printf(". ");
            }
        }
        printf("\n");
    }
}

void printRightAngledTriangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void printInvertedRightAngledTriangle(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void printPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
     
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
    
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void printInvertedPyramid(int rows)
{
    for (int i = rows; i >= 1; i--)
    {

        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void printNumberPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        for (int k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}

void printFloydsTriangle(int rows)
{
    int num = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

int combination(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

void printPascalsTriangle(int rows)
{
    for (int i = 0; i < rows; i++)
    {

        for (int j = 1; j <= rows - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", combination(i, k));
        }
        printf("\n");
    }
}