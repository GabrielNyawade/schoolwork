#include <iostream>
#include <vector>

void shift_zeros(std::vector<int>& array)
{
    int temp;
    for (int i = 0; i < int(array.size()); i++)
    {
        for (int j = 1; j < int(array.size()); j++)
        {
            if (array[j] == 0)
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

std::ostream& operator<<(std::ostream& out, std::vector<int>& vector)
{
    int len = vector.size();
    out << "{";
    for (int i = 0; i < len; i++)
    {
        out << vector[i];
        if (i < len - 1)
            out << ", ";
    }
    out << "}";
    return out;
}


int main()
{
    std::vector<int> nums = { 3, 4, 0, 1, 0, 2, 0, 6, 3, 0, 3, 0 };
    shift_zeros(nums);
    std::cout << nums << "\n";

    return 0;
}