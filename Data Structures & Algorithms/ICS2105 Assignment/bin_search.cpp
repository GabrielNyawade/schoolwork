#include <iostream>
#include <vector>

void binarySearch(int search_elem, std::vector<int>& elems)
{
    int first, middle, last;
    first = 0;
    last = elems.size() - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (search_elem == elems[middle])
        {
            std::cout << "Element has been found in index " << middle << " of ";
            display_vector(elems);
            break;
        }
        else if (search_elem > elems[middle])
            first = middle + 1;
        else if (search_elem < elems[middle])
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first > last)
        std::cout << "Element has not been found" << "\n";
}

void display_vector(std::vector<int>& vec)
{
    std::cout << "{";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i];
        if (i < vec.size() - 1)
            std::cout << ", ";
    }
    std::cout << "}" << "\n";
}

int main()
{
    std::vector<int> my_nums = { 2, 5, 17, 3, 1, 6, 14, 9 };
    int num = 17;
    binarySearch(num, my_nums);
    return 0;
}
