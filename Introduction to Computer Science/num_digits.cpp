#include <iostream>
using std::cin, std::cout;
int num_digits(int n);
int main()
{
    int input;
    cout << "Enter a number >>> ";
    cin >> input;
    cout << input << " has " << num_digits(input) << " digits.\n";

    return 0;
}

int num_digits(int n)
{
    if (n == 0) return 1;
    if (n < 0) n *= -1;
    int result = 0;
    while (n != 0)
    {
        n = n / 10;
        result++;
    }
    return result;
}