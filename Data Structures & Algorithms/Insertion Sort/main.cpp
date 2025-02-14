#include <iostream>
#include <vector>

void insertion_sort(std::vector<int>& nums)
{
    int temp, i, j;
    for (i = 1; i < nums.size(); i++)
    {
        j = i;
        while (j > 0 && nums[j] < nums[j - 1])
        {
            temp = nums[j];
            nums[j] = nums[j - 1];
            nums[j - 1] = temp;
            j--;
        }
    }
}
void display_vector(const std::vector<int>& vec)
{
    std::cout << "{";
    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i];
        if (i < vec.size() - 1)
            std::cout << ", ";
    }
    std::cout << "}" << "\n";
}
int main()
{
    std::vector<int> my_nums = { 2, 5, 43, 16, 22, 7, 13, 1, 20 };
    insertion_sort(my_nums);
    display_vector(my_nums);
    return 0;
}
