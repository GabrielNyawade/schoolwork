#include <iostream>
#include <vector>
// Write a function that finds the largest element in an integer array.
int max_val(std::vector<int>& array)
{
    int val = array[0];
    for (int i = 1; i < int(array.size()); i++)
    {
        if (array[i] > val)
            val = array[i];
    }
    return val;
}

int main()
{
    std::vector<int> nums = { 2, 14, 5, 36, 26 };
    std::cout << max_val(nums);
    return 0;
}