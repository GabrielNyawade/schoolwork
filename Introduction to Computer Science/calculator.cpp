#include <iostream>
using std::cout, std::cin, std::endl;
int sum(int x, int y);
int diff(int x, int y);
int mul(int x, int y);
float quot(int x, int y);
int pow(int x, int y);
int main()
{
    int n1, n2;
    char sign;
    cout << "Enter first number >>> ";
    cin >> n1;
    cout << "Enter the operand >>> ";
    cin >> sign;
    cout << "Enter the second number >>> ";
    cin >> n2;
    switch (sign)
    {
    case '+':
        cout << sum(n1, n2) << endl;
        break;
    case '-':
        cout << diff(n1, n2) << endl;
        break;
    case '*':
        cout << mul(n1, n2) << endl;
        break;
    case '/':
        cout << quot(n1, n2) << endl;
        break;
    case '^':
        cout << pow(n1, n2) << endl;
        break;
    default:
        cout << "ERROR: Invalid operand!\n";
        exit(1);
        break;
    }

    return 0;
}

int sum(int x, int y)
{
    return x + y;
}

int diff(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

float quot(int x, int y)
{
    return x / y;
}

int pow(int x, int y)
{
    int result = 1;
    for (int i = 0; i < y; i++)
        result *= x;
    return result;
}