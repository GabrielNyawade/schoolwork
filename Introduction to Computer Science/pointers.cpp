#include <iostream>
using namespace std;

void swap(int* var1, int* var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

void swap(int& var1, int& var2)
{
    int temp = var1;
    var1 = var2;
    var2 = temp;
}

int main()
{
    int count = 5;
    int* pCount = &count;

    cout << "Value: " << count << endl;
    cout << "Address: " << &count << endl;
    cout << "Address: " << pCount << endl;
    cout << "Value: " << *pCount << endl;
    
    int list[6] = {11, 30, 26, 51, 43, 19};

    pCount = list;
    do {
        cout << *pCount << ", ";
        pCount++;
    } while (pCount != &list[6]);
    cout << endl;
    cout << pCount - list << endl;

    pCount = list;
    for (int i = 0; i < 6; i++)
    {
        cout << pCount+i << ": " << *(pCount+i) << endl;
    }


    int a = 2;
    int b = 3;
    cout << "a: " << a << '\n' << "b: " << b << '\n';
    swap(&a, &b);
    cout << "After swapping: \n" << "a: " << a << '\n' << "b: " << b << '\n';
    swap(a, b);
    cout << "After swapping: \n" << "a: " << a << '\n' << "b: " << b << '\n';
    return 0;
}