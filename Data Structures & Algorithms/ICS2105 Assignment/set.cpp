#include <iostream>
#include <vector>

using namespace std;

void remove_duplicates(vector<int>& array)
{
    vector<int> output;
    int val = array[0];
    output.push_back(val);
    for (int i = 1; i < array.size(); i++)
    {
        if (array[i] != val)
        {
            val = array[i];
            output.push_back(val);
        }
    }
    array = output;
}

std::ostream &operator<<(std::ostream &out, std::vector<int> &vector)
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
    vector<int> nums = { 1, 2, 2, 3, 3, 3, 4, 5 };
    remove_duplicates(nums);
    cout << nums << endl;
    return 0;
}