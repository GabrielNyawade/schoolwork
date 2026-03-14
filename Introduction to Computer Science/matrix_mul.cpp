#include <iostream>
using std::cin, std::cout;
const int cols_a = 2;
const int cols_b = 2;
void fillMatA(int a[][cols_a], int rows);
void fillMatB(int b[][cols_b]);

void multiply(int a[][cols_a], int b[][cols_b], int c[][cols_b], int rows_a);

void displayMatA(int a[][cols_a], int rows);
void displayMatB(int b[][cols_b]);
void displayMatC(int c[][cols_b], int rows);

int main()
{
    int rows_A;
    cout << "Enter rows for initial matrix (" << cols_a << " columns): ";
    cin >> rows_A;
    int mat_A[rows_A][cols_a];
    int mat_B[cols_a][cols_b];
    int mat_C[rows_A][cols_b];
    fillMatA(mat_A, rows_A);
    fillMatB(mat_B);
    multiply(mat_A, mat_B, mat_C, rows_A);
    cout << "Matrix A: \n";
    displayMatA(mat_A, rows_A);
    cout << "Matrix B: \n";
    displayMatB(mat_B);
    cout << "Matrix C (A X B): \n";
    displayMatC(mat_C, rows_A);
    return 0;
}

void fillMatA(int a[][cols_a], int rows)
{
    cout << "Filling Matrix A: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols_a; j++)
        {
            cout << "Enter element in position [" << i+1 << ", " << j+1 << "]: ";
            cin >> a[i][j];
        }
        cout << '\n';
    }
}
void fillMatB(int b[][cols_b])
{
    cout << "Filling Matrix B: \n";
    for (int i = 0; i < cols_a; i++)
    {
        for (int j = 0; j < cols_b; j++)
        {
            cout << "Enter element in position [" << i+1 << ", " << j+1 << "]: ";
            cin >> b[i][j];
        }
        cout << '\n';
    }
}
void multiply(int a[][cols_a], int b[][cols_b], int c[][cols_b], int rows_a)
{
    for (int i = 0; i < rows_a; i++)
    {
        for (int j = 0; j < cols_b; j++)
        {
            int ibuf = 0;
            for (int k = 0; k < cols_a; k++)
            {
                ibuf += a[i][k] * b[k][j];
                c[i][j] = ibuf;
            }
        }
    }
}
void displayMatA(int a[][cols_a], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols_a; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << '\n';
    }
    cout << '\n';
}
void displayMatB(int b[][cols_b])
{
    for (int i = 0; i < cols_a; i++)
    {
        for (int j = 0; j < cols_b; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << '\n';
    }
}
void displayMatC(int c[][cols_b], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols_b; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << '\n';
    }
}