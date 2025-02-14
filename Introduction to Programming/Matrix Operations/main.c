#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void display_matrix(int matrix[2][2]);
void sum(int A[2][2], int B[2][2]);

int main()
{
    int mat_A[2][2];
    int mat_B[2][2];
    char operand;

    printf("Welcome to the Matrix Calculator\n");
    while (true)
    {
        printf("================================\n");
        printf("Choose an option:\n");
        printf("\t1. Define Matrix A\n");
        printf("\t2. Define Matrix B\n");
        printf("\t3  Add the two matrices\n");
        printf("\t4. Exit\n");
        int option;
        scanf("%d",&option);

        switch (option)
        {
            case 1:
                printf("MATRIX A\n");
                printf("Mat 1,1? ");
                scanf("%d", &mat_A[0][0]);
                printf("Mat 1,2? ");
                scanf("%d", &mat_A[0][1]);
                printf("Mat 2,1? ");
                scanf("%d", &mat_A[1][0]);
                printf("Mat 2,2? ");
                scanf("%d", &mat_A[1][1]);
                display_matrix(mat_A);
                break;
            case 2:
                printf("MATRIX B\n");
                printf("Mat 1,1? ");
                scanf("%d", &mat_B[0][0]);
                printf("Mat 1,2? ");
                scanf("%d", &mat_B[0][1]);
                printf("Mat 2,1? ");
                scanf("%d", &mat_B[1][0]);
                printf("Mat 2,2? ");
                scanf("%d", &mat_B[1][1]);
                display_matrix(mat_B);
                break;
            case 3:
                sum(mat_A, mat_B);
                break;
            case 4:
                exit(0);
                break;
            default:
                break;
        }
    }
    return 0;
}

void display_matrix(int matrix[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        printf("| ");
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("|");
        printf("\n");
    }
}

void sum(int A[2][2], int B[2][2])
{
    int ans[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            ans[i][j] = A[i][j] + B[i][j];
        }
    }
    display_matrix(ans);
}
