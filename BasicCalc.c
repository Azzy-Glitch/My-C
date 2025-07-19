#include <stdio.h>

int main()
{
    char op;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            result = num1 / num2;
        else
        {
            printf("Error! Division by zero.");
            return 1;
        }
        break;
    default:
        printf("Error! Invalid operator.");
        return 1;
    }

    printf("%.2lf %c %.2lf = %.2lf", num1, op, num2, result);
    return 0;
}