#include <iostream>
using std::cin, std::cout, std::endl;
int count_occurrence(int num, int arr[], int sz_arr);
int pos_max(int arr[], int sz_arr);
void print(int arr[], int sz_arr);
int main()
{
    int sz_i_arr, value;
    std::cout << "Enter the size of the array: ";
    std::cin >> sz_i_arr;
    int i_array[sz_i_arr];
    std::cout << "Enter elements: \n";
    for (int i = 0; i < sz_i_arr; i++)
    {
        std::cout << "Position " << i << ": ";
        std::cin >> i_array[i];
    }
    int arr_occurrences[sz_i_arr];
    for (int i = 0; i < sz_i_arr; i++)
    {
        arr_occurrences[i] = count_occurrence(i_array[i], i_array, sz_i_arr);
    }
    cout << "The most frequent number in the array is " << i_array[pos_max(arr_occurrences, sz_i_arr)] << endl;
    return 0;
}
int count_occurrence(int num, int arr[], int sz_arr)
{
    int result = 0;
    for (int i = 0; i < sz_arr; i++)
    {
        if (arr[i] == num)
            result++;
    }
    return result;
}
int pos_max(int arr[], int sz_arr)
{
    int max = arr[0];
    int pos = 0;
    for (int i = 1; i < sz_arr; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < sz_arr; i++)
    {
        if (arr[i] == max)
            pos = i;
    }
    return pos;
}
void print(int arr[], int sz_arr)
{
    std::cout << "{";
    for (int i = 0; i < sz_arr; i++)
    {
        std::cout << arr[i];
        if (sz_arr-i > 1)
            std::cout << ", ";
    }
    std::cout << "}\n";
}