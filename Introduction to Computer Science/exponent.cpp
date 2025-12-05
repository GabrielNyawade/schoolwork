#include <iostream>
using std::cin, std::cout;
int main()
{
    int a, b;
    int result = 1;
    cout << "Enter base >>> ";
    cin >> a;
    cout << "Enter exponent >>> ";
    cin >> b;

    // Compute a^b using for loop
    for (int i = 1; i <= b; i++)
        result *= a;

    cout << a << "^" << b << " = " << result << "\n";
    return 0;
}