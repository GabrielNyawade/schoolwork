#include <iostream>
using std::cin, std::cout;
void mistery(int list[], int newList[], int size)
{
    for (int i = 0, j = size-1; i < size; i++, j--)
    {
        if (list[i]%2==0)
            newList[j] = list[i];
        else
            newList[j] = 0;
    }
}

void printArray(int list[], int size)
{
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
}

int main()
{
    const int SIZE = 3;
    int A[SIZE] = {1};
    cin >> A[0]; cin >> A[1];
    cout << A[2] << '\n';
    int B[SIZE];
    mistery(A, B, SIZE); printArray(B, SIZE);
    return 0;
}