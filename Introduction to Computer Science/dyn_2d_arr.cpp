#include <iostream>
using std::cin, std::cout;

int main()
{
    int m, n;
    cout << "Enter number of ROWS of matrix: ";
    cin >> n;
    cout << "Enter number of COLUMNS of matrix: ";
    cin >> m;
    float **mat = new float*[n];
    for (int i = 0; i < n; i++)
    {
        *(mat+i) = new float[m];
    }
    cout << "Enter values: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Element " << i+1 << ", " << j+1 << ": " ;
            cin >> *(*(mat+i)+j);
        }
    }
    cout << "Output: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "[";
        for (int j = 0; j < m; j++)
        {
            cout << *(*(mat+i)+j);
            if (j < m-1) cout << " ";
        }
        cout << "]\n";
    }
    

}