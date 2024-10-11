#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int x = 0;

void terminate_exe(const char* error_message)
{
    printf("%s\n", error_message);
    exit(1);
}

void check_pin(char* input);

int main()
{
    for (int i = 0; i < 10000; i++)
    {
        printf("Attempt %d >>> ", i + 1);
        if (x < 10)
        {
            char pre[4] = "000";
            char post[4];
            sprintf(post, "%d", x);
            strcat(pre, post);
            check_pin(pre);
        } else if (x < 100) {
            char pre[4] = "00";
            char post[4];
            sprintf(post, "%d", x);
            strcat(pre, post);
            check_pin(pre);
        } else if (x < 1000) {
            char pre[4] = "0";
            char post[4];
            sprintf(post, "%d", x);
            strcat(pre, post);
            check_pin(pre);
        } else if (x < 10000) {
            char post[4];
            sprintf(post, "%d", x);
            check_pin(post);
        }

    }
    return 0;
}

void check_pin(char* input)
{
    char pin[16] = "7728";

    if (strcmp(input, pin) != 0)
    {
        printf("Incorrect PIN\n");
        x++;
    } else {
        printf("Correct PIN: %s\n", input);
        terminate_exe("Program exit...");
    }
}
