#include <iostream>
using std::cin, std::cout;
int count_occurrence(int num, int arr[], int size_arr);
void print(int arr[], int size);
int main()
{
    int num_elem, value;
    std::cout << "Enter the size of the array: ";
    std::cin >> num_elem;
    int i_array[num_elem];
    std::cout << "Enter elements: \n";
    for (int i = 0; i < num_elem; i++)
    {
        std::cout << "Position " << i << ": ";
        std::cin >> i_array[i];
    }
    cout << "Enter a number: ";
    cin >> value;
    cout << value << " occurs " << count_occurrence(value, i_array, num_elem) << " times in ";
    print(i_array, num_elem);
    return 0;
}
int count_occurrence(int num, int arr[], int size_arr)
{
    int result = 0;
    for (int i = 0; i < size_arr; i++)
    {
        if (arr[i] == num)
            result++;
    }
    return result;
}
void print(int arr[], int size)
{
    std::cout << "{";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
        if (size-i > 1)
            std::cout << ", ";
    }
    std::cout << "}\n";
}