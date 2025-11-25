#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int rounds; // user inputs number of rounds
    printf("Number of rounds to play? "); // Prompts the user to specify the number of rounds to play
    scanf("%d", &rounds); // input part

    int score = 0;
    int secret = (rand() % 100) + 1; // secret number
    int count = 0; // counter for the number of rounds
    while (count < rounds) // 0(1st round), 1(2nd round) 2(3rd round) etc...
    {
        int number; // lucky number
        printf("Enter your number -> "); // Prompts the user to key in a number
        scanf("%d", &number); // input part

        int val = number % secret; // val = remainder, remainder is found by the use of modulus (%)

        if (val == 0) // if the remainder (lucky number divided by secret number) = 0
        {
            score += 1; // score = score + 1; or score++;
        }
        else if (val % 2 == 0) // if the remainder is even, we expect its modulus with 2 to be zero
        {
            score += 3; // score incremented by 3
        }
        else // meaning the modulus is not 0 (odd)
        {
            score -= 3; // score decreased by 3
        }
        count++; // increments the counter by 1

    }
    if (score > 0) // if the score is a positive number
        printf("You have won.\n");
    else
        printf("Oops! You lose.\n");

    printf("\n");
    printf("Secret number = %d\n", secret);
    return 0;
}
