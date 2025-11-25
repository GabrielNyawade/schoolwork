#include <iostream>
#include <vector>

void display_ivec(const std::vector<int>& vec)
{
    int n = vec.size();
    std::cout << "{";
    for (int i = 0; i < n; i++)
    {
        std::cout << vec[i];
        if (i < n - 1)
            std::cout << ", ";

    }
    std::cout << "}";
}

void bubble_sort(std::vector<int>& nums)
{
    int n = nums.size();
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (nums[j] > nums[j + 1])
                std::swap(nums[j], nums[j + 1]);
        }
    }
}

int main()
{
    std::vector<int> my_nums = { 12, 45, 34, 356, 24, 62, 23, 15, 9, 10, 4 };
    bubble_sort(my_nums);
    display_ivec(my_nums);
    return 0;
}
