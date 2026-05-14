#include <iostream>
#include <array>
using std::cin, std::cout, std::array;

int max(array<int, 10>& arr);

int main()
{
    array<int, 10> nums = {24, 60, 18, 71, 52, 34, 81, 93, 26, 39};
    int output = max(nums);
    cout << "Maximum = "  << output << '\n';
}

int max(array<int, 10>& arr)
{
   int val = arr.at(0);
   for (int elem : arr)
   {
    if (elem > val) val = elem;
   }
   return val;
}