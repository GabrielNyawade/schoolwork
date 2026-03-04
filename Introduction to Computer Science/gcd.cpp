#include <iostream>
using std::cin, std::cout;
int gcd(int n1, int n2);

int main()
{
    int a, b;
    cout << "Enter two numbers: \n" << "n1: ";
    cin >> a;
    cout << "n2: ";
    cin >> b;
    cout << "The GCD of " << a << " and " << b << " is " << gcd(a, b) << "\n";    
    return 0;
}
/*[Euclidean algorithm for calculation of gcd]*/
int gcd(int n1, int n2)
{
    if (n1 % n2 == 0)
        return n2;
    else 
        return gcd(n2, n1 % n2);
}

int min(int n1, int n2)
{
    if (n1 < n2)
        return n1;
    else
        return n2;
}

/********************* [Iterative approach]
int gcd(int n1, int n2)
{
    int result = 1;
    for (int i = min(n1, n2); i > result; i--)
        if (n1 % i == 0 && n2 % i == 0)
            result = i;
    return result;
}
********************/