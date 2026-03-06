#include <iostream>
void selection_sort(int arr[], int size);
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
    std::cout << "Original array: ";
    print(myArray, sz_array);
    selection_sort(myArray, sz_array);
    std::cout << "Sorted array: ";
    print(myArray, sz_array);
    return 0;
}
void selection_sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
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
    std::cout << "}\n";
}