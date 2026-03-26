#include <iostream>
using std::cin, std::cout;
void printArray(int* p, int size);
void doubleValues(int* p, int size);
int main()
{
    int scores[5] = {85, 92, 70, 88, 95};
    printArray(scores, 5);
    doubleValues(scores, 5);
    printArray(scores, 5);
    return 0;
}
void printArray(int* p, int size)
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << *(p+i);
        if (i < size-1) cout << ", ";
    }
    cout << "}\n";
}
void doubleValues(int* p, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(p+i) *= 2;
    }
}