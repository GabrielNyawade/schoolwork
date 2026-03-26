#include <iostream>
using std::cin, std::cout;
void swap1(int var1, int var2);
void swap2(int* p1, int* p2);
void swap3(int& var1, int& var2);
int main()
{
    int a, b;
    cout << "Enter two numbers: \n";
    cin >> a >> b;

    cout << "swap1 - Before: a = " << a << ", b = " << b << " | ";
    swap1(a, b);
    cout << "After: a = " << a << ", b = " << b << "\n";

    cout << "swap2 - Before: a = " << a << ", b = " << b << " | ";
    swap2(&a, &b);
    cout << "After: a = " << a << ", b = " << b << "\n";

    cout << "swap3 - Before: a = " << a << ", b = " << b << " | ";
    swap3(a, b);
    cout << "After: a = " << a << ", b = " << b << "\n";
    return 0;
}
void swap1(int var1, int var2)
{
    int temp = var1;
    var1 = var2;
    var2 = temp;
}
void swap2(int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void swap3(int& var1, int& var2)
{
    int temp = var2;
    var2 = var1;
    var1 = temp;
}