#include <iostream>
using std::cout, std::cin;
int main()
{
    int a0, a1, a2;
    cout << "Enter the first number: ";
    cin >> a0;
    cout << "Enter the second number: ";
    cin >> a1;
    cout << "Enter the third number: ";
    cin >> a2;

    int aux = a1;
    if (a0 > a1)
    {
        a1 = a0;
        a0 = aux;
        aux = a1;
    }
    if (a0 > a2)
    {
        a1 = a0;
        a0 = a2;
        a2 = aux;
    } else if (a1 > a2) {
        a1 = a2;
        a2 = aux;
    }

    cout << "The numbers in ascending order are: " << a0 << " < " << a1 << " < " << a2 << "\n";

    return 0;
}
