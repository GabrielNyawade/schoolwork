#include <stdio.h>
#include <stdlib.h>

#define N_FIB 10

void display_sequence(int sequence[], int len);
int fibonacci(int idx);
int main()
{
    int fib[N_FIB] = {1, 1};
    for (int i = 2; i < N_FIB; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    display_sequence(fib, N_FIB);
    printf("\n============================\n");

    // Method 2
    int output;
    for (int idx = 0; idx < N_FIB; idx++)
    {
        output = fibonacci(idx);
        printf("%d, ", output);
    }
    return 0;
}

void display_sequence(int sequence[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", sequence[i]);
    }
}

// Alternatively
int fibonacci(int idx)
{
    int n;
    if (idx == 0 || idx == 1)
        n = 1;
    else
        n = fibonacci(idx-1) + fibonacci(idx-2);

    return n;
}
