#include <iostream>
using std::cin, std::cout;

// function declaration
void fillMatrix(int m[][4], int rows);
void printMatrix(int m[][4], int rows);
int rowSum(int m[][4], int row);
int findMax(int m[][4], int row);


int main()
{
    int rows_mat;
    cout << "Enter number of rows of matrix (4 columns) >>> ";
    cin >> rows_mat;
    int mat[rows_mat][4];
    fillMatrix(mat, rows_mat);
    printMatrix(mat, rows_mat);
    for (int i = 0; i < rows_mat; i++)
        cout << "Sum of row " << i+1 << ": " << rowSum(mat, i) << '\n';
    cout << "Maximum value: " << findMax(mat, rows_mat) << '\n';
    return 0;
}

// function definition
void fillMatrix(int m[][4], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter element in position " << i+1 << ", " << j+1 << ": ";
            cin >> m[i][j];
        }
        cout << '\n';
    }
}
void printMatrix(int m[][4], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << '\n';
    }
}
int rowSum(int m[][4], int row)
{
    int sum = 0;
    for (int ix = 0; ix < 4; ix++)
    {
        sum += m[row][ix];
    }
    return sum;
}
int findMax(int m[][4], int rows)
{
    int max = m[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (m[i][j] > max)
                max = m[i][j];
        }
    }
    return max;
}