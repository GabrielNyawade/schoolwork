#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rounds;
    int score = 0;
    int secret = 11;
    printf("Number of rounds to play? ");
    scanf("%d", &rounds);
    int count = 0;
    while (count < rounds)
    {
        int number;
        printf("Enter your number -> ");
        scanf("%d", &number);
        int val = number % secret;

        if (val == 0)
        {
            score += 1;
        }
        else if (val % 2 == 0)
        {
            score += 3;
        }
        else
        {
            score -= 3;
        }
        count++;

    }
    if (score > 0)
        printf("You have won.\n");
    else
        printf("Oops! You lose.\n");
}
