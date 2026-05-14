#include <iostream>
#include <array>
using std::cin, std::cout, std::array;

int main()
{
    array<double, 5> nums;
    for (int i = 0; i < 5; i++)
    {
        nums.at(i) = (i+1)*(i+1);
    }
    for (size_t i = 0; i < nums.size(); i++)
    {
        cout << nums.at(i) << ' ';
    }
    cout << '\n';
    return 0;    
}