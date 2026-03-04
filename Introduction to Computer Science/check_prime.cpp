#include <iostream>
using std::cout, std::cin;
bool isPrime(int n);
int main()
{
    int input;
    cout << "Enter a number to check if it is prime >>> ";
    cin >> input;
    if (isPrime(input))
        cout << "True";
    else
        cout << "False";
    return 0;
}

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}