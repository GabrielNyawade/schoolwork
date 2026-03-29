#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> *(arr+i);
    }

    int* first = arr;
    int* last = arr + n - 2;
    int temp = *first;
    *first = *last;
    *last = temp;

    for (int i = 0; i < n; i++)
    {
        cout << *(arr+i) << " ";
    }
    
    return 0;
}   