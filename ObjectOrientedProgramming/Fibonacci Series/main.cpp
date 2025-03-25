#include <iostream>

void fibonacci(int n)
{
    if (n == 0) return;
    double prev = 0;
    std::cout << prev << ", ";
    double curr = 1;
    int i;
    for (i = 1; i < n; i++)
    {
        std::cout << curr << ", ";
        curr = curr + prev;
        prev = curr - prev;
    }
}

int main()
{
    int limit;
    std::cout << "Fibonacci series of n = ";
    std::cin >> limit;
    fibonacci(limit);
    return 0;
}
