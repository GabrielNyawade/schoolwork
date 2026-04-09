#include <iostream>
using std::cin, std::cout;

int main()
{
    int n = 11;
    int *nums = new int[n];
    for (int i = 0; i < n; i++)
    {
        nums[i] = i+1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << '\n';
    int temp = 0;
    for (int i = 0; i < n/2; i++)
    {
        temp = nums[i];
        nums[i] = nums[(n-1)-i];
        nums[(n-1)-i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << '\n';
    return 0;
}