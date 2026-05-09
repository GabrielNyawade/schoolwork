#include <iostream>
using std::cin, std::cout;
// function declaration
int sum_from(int n1, int n2);
int iter_sum_from(int n1, int n2);
int main ()
{
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << sum_from(a, b) << '\n';
    cout << iter_sum_from(a, b) << '\n';
    return 0;
}

//function definition
int sum_from(int n1, int n2)
{
    int s1, s2;
    s1 = n1 * (n1 + 1) / 2;
    s2 = n2 * (n2 + 1) / 2;
    return n1 + s2 - s1;
}

int iter_sum_from(int n1, int n2)
{
    int sum = n2;
    for (int i = n1; i < n2; i++)
    {
        sum += i;
    }
    return sum;
}