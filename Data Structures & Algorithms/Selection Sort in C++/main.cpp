#include <iostream>
#include <vector>

void display_vector(const std::vector<int>& vec)
{
    std::cout << "{";
    for (int i = 0; i < (int)vec.size(); i++)
    {
        std::cout << vec[i];
        if (i < (int)vec.size() - 1)
            std::cout << ", ";
    }
    std::cout << "}";
}

void selection_sort(std::vector<int>& nums)
{
    for (int i = 0; i < (int)nums.size(); i++)
    {
        for (int j = i + 1; j < (int)nums.size(); j++)
        {
            if (nums[j] < nums[i])
                std::swap(nums[j], nums[i]);
        }
    }
}

int main()
{
    std::vector<int> my_nums = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    selection_sort(my_nums);
    display_vector(my_nums);
    return 0;
}
