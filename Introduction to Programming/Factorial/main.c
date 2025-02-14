#include <stdio.h>
#include <stdlib.h>


int main()
{
    int number, factorial = 1;
    printf("Enter the number for factorial >>> ");
    scanf("%d", &number);
    for (int counter = number; counter > 0; counter--)
    {
        factorial *= counter;
    }
    printf("The factorial of %d is %d \n", number, factorial);
    return 0;

}

