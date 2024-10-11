#include <stdio.h>
#include <stdlib.h>

int num;

int main()
{
    printf("Enter a number");
    scanf("%d", &num);
    printf("%X is the hexadecimal notation for %d\n", num, num);
    return 0x00;
}
