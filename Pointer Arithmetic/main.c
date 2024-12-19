#include <stdio.h>
#include <stdlib.h>
void compute(int* num1, int* num2, int* ptr);
int main()
{
    /*int f, *p;
    f = 123;
    p = &f;
    printf("%d\n", (*p)++);
    printf("%d\n", *p++);
    */

    int a, b;
    printf("Enter a >>> ");
    scanf("%d", &a);
    printf("Enter b >>> ");
    scanf("%d", &b);
    int result_buffer[2];
    int* bufptr = &result_buffer;
    compute(&a, &b, bufptr);
    printf("The sum of %d and %d is %d\n", a, b, result_buffer[0]);
    printf("The difference of %d and %d is %d\n", a, b, result_buffer[1]);
    return 0;
}

void compute(int* num1, int* num2, int* ptr)
{
    *ptr = *num1 + *num2;
    ptr++;
    *ptr = *num1 - *num2;
}
