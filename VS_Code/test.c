#include <stdio.h>
#include <stdlib.h>

#define square(num) num*num
#define cube(num) num*num*num

int main(int argc, char const *argv[])
{
    printf("Number\tSquare\tCube\n");
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("%-d\t%-d\t%-d\n", i, square(i), cube(i));
    }
    return 0;
}
