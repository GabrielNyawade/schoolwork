#include <iostream>
using std::cin, std::cout;
void fillMatrix(int** M, int __R, int __C);
void printMatrix(int** M, int __R, int __C);
int main()
{
    int rows, cols;
    cout << "Enter the number of rows of the matrix: ";
    cin >> rows;
    cout << "Enter the number of columns of the matrix: ";
    cin >> cols;
    
    int** mat = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        *(mat+i) = new int[cols];
    }
    
    cout << '\n';
    fillMatrix(mat, rows, cols);
    cout << '\n';
    printMatrix(mat, rows, cols);
    return 0;
}
void fillMatrix(int** M, int __R, int __C)
{
    for (int i = 0; i < __R; i++)
    {
        for (int j = 0; j < __C; j++)
        {
            cout << "Element " << i+1 << ", " << j+1 << ": ";
            cin >> *(*(M+i)+j);
        }
    }
}
void printMatrix(int** M, int __R, int __C)
{
    for (int i = 0; i < __R; i++)
    {
        for (int j = 0; j < __C; j++)
        {
            cout << *(*(M+i)+j) << '\t'; 
        }
        cout << '\n';
    }
    cout << '\n';
}