#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    // input a number
    printf("Enter a number >>> ");
    scanf("%d", &number);

    // check if number is negative, positive or zero
    if (number < 0) {
        printf("Negative\n");
    } else if (number > 0) {
        printf("Positive\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}
