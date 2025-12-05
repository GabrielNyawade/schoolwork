#include <stdio.h>

#define ROWS 10
#define COLS 10

int main()
{
    int table[ROWS][COLS];
    int i, j;
    
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            table[i][j] = (i+1) * (j+1);
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
    

}