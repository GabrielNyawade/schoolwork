#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define sum(a, b) a+b

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main()
{
    float num1, num2;
    char op;

    printf("Steps:\n1. Enter two numbers.\n2. Enter the arithmetic operation.\n");
    printf("Enter two numbers.\n");
    printf("--> ");
    scanf("%f", &num1);
    printf("--> ");
    scanf("%f", &num2);

    printf("Operand: ");
    getchar();
    scanf("%c", &op);

    float ans;

    switch(op)
    {
        case '+':
            ans = sum(num1 ,num2);
            break;
        case '-':
            ans = num1 - num2;
            break;
        case '*':
            ans = num1 * num2;
            break;
        case '/':
            ans = num1 / num2;
            break;
        case '%':
            ans = (int)num1 % (int)num2;
            break;
        case '^':
            ans = power(num1, num2);
            break;
        default:
            break;
    }
    printf("\n");
    printf("%f %c %f = %lf", num1, op, num2, ans);
    return 0;
}



