#include <iostream>
using std::cin, std::cout;
int gcd(int n1, int n2);

int main()
{
    int a, b;
    cout << "Enter two numbers >>> ";
    cin >> a >> b;
    cout << "The GCD of " << a << " and " << b << " is " << gcd(a, b) << "\n";    
    return 0;
}

int gcd(int n1, int n2)
{
    if (n1 % n2 == 0)
        return n2;
    else 
        return gcd(n2, n1 % n2);
}