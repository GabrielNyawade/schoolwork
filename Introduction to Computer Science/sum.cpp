#include <iostream>
using std::cin, std::cout;
// function declaration
int sum_from(int n1, int n2);

int main ()
{
    int a, b;


    return 0;
}

//function definition
int sum_from(int n1, int n2)
{
    int s1, s2;
    s1 = n1 * (n1 + 1) / 2;
    s2 = n2 * (n2 + 1) / 2;
    return s2 - s1;
}