#include <iostream>
using std::cin, std::cout;

int count_even(int* arr, int size);

int main()
{
    int my_array[] = {2, 1, 3, 4};
    int result = count_even(my_array, 4);
    cout << result << '\n';
    return 0;
}

int count_even(int* arr, int size)
{
    if (size < 1) return 0;
    int n = *arr % 2 == 0;
    return n + count_even(arr+1, size-1);
}