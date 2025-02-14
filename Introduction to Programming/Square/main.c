#include <stdio.h>
#include <stdlib.h>
void square(int* base);
int main()
{
    int num;
    printf("Enter a number >>> ");
    scanf("%d", &num);
    printf("The square of %d is ", num);
    square(&num);
    printf("%d\n", num);
    return 0;
}

void square(int* base)
{
    *base*=*base;
}
