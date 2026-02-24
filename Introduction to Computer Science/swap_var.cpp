#include <iostream>
using std::cin, std::cout;
void swap_var(int& var1, int& var2);
int main()
{
    int a, b;
    cout << "Enter two numbers: \n";
    cin >> a >> b;
    cout << "a: " << a << "\n" << "b: " << b << "\n";
    swap_var(a, b);
    cout << "After swapping: \n" << "a: " << a << "\n" << "b: " << b << "\n";
    return 0;
}

void swap_var(int& var1, int& var2)
{
    int temp = var2;
    var2 = var1;
    var1 = temp;
}