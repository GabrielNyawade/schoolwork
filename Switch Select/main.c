#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter x --> ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("x is greater than y.\n");
    }
    else if (x == 2)
    {
        printf("x is greater than y.\n");
    }
    else if (x == 3)
    {
        printf("x is greater than y.\n");
    }
    else
    {
        printf("The value %d is out of range.\n", x);
    }
    return 0;
}
