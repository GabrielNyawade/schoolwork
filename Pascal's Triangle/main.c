#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main()
{
    int n, output;
    printf("Enter number of rows for the triangle >>> ");
    scanf("%d", &n);
    int m = n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = m; j >= 0; j--)
            printf(" ");
        for (int k = i; k >= 0; k--)
        {
            output = factorial(i) / (factorial(k) * factorial(i - k));
            printf("%d ", output);
        }
        printf('\n');
        m--;
    }

    return 0;
}

int factorial(int n)
{
    int fact = 1;
    for (int counter = n; counter > 0; counter--)
        fact *= counter;
    return fact;
}
