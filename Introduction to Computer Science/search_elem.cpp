#include <iostream>
// Returns the index of the element found (returns -1 if not in the array)
int search_element(int elem, int arr[], int size);
void print(int arr[], int size);
int main()
{
    int sz_array;
    std::cout << "Enter total number of entries in array: ";
    std::cin >> sz_array;
    int myArray[sz_array];
    std::cout << "Enter elements of the array:\n";
    for (int i = 0; i < sz_array; i++)
    {
        std::cout << "Element " << i+1 << ": ";
        std::cin >> myArray[i];
    }
    int number;
    std::cout << "Enter element to search for: ";
    std::cin >> number;
    int index = search_element(number, myArray, sz_array);
    if (index < 0)
        std::cout << "Element not found!\n";
    else
        std::cout << "Index of " << number << ": " << index << '\n';
    return 0;
}
int search_element(int elem, int arr[], int size)
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elem)
            index = i;
    }
    return index;
}
void print(int arr[], int size)
{
    std::cout << "{";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
        if (i < size - 1)
            std::cout << ", ";
    }
    std::cout << "}";
}