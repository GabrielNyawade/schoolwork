#include <iostream>
using std::cin, std::cout;

const int ROWS = 2;
const int COLS = 4;

void insertMatrix(int mat[ROWS][COLS]);
void transposeMatrix(int mat[ROWS][COLS], int mat_T[COLS][ROWS]);
void displayMatrix(int mat[ROWS][COLS]);
void displayTransposedMatrix(int mat[COLS][ROWS]);
int main()
{
    int matrix[ROWS][COLS];
    int transposed[COLS][ROWS];
    insertMatrix(matrix);
    cout << "Original matrix: \n";
    displayMatrix(matrix);
    transposeMatrix(matrix, transposed);
    cout << "Transposed matrix: \n";
    displayTransposedMatrix(transposed);
    return 0;
}
void insertMatrix(int mat[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << "Enter element " << i+1 << ", " << j+1 << ": ";
            cin >> mat[i][j];
        }
    }
}
void transposeMatrix(int mat[ROWS][COLS], int mat_T[COLS][ROWS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            mat_T[j][i] = mat[i][j];
        }
    }
}
void displayMatrix(int mat[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}
void displayTransposedMatrix(int mat[COLS][ROWS])
{
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}