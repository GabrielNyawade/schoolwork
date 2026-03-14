#include <iostream>
using std::cin, std::cout;
void insertArray(int arr[], int size);
int most_freq(int arr[], int size);
int main()
{
    int sz;
    cout << "Enter the size of the array: ";
    cin >> sz;
    int i_arr[sz];
    insertArray(i_arr, sz);
    cout << "The most frequent number in the array is " << most_freq(i_arr, sz) << '\n';
    return 0;
}
void insertArray(int arr[], int size)
{
    std::cout << "Enter elements: \n";
    for (int i = 0; i < size; i++)
    {
        std::cout << "Position " << i << ": ";
        std::cin >> arr[i];
    }
}
int most_freq(int arr[], int size)
{
    int num;
    int max_app = 0;
    for (int i = 0; i < size; i++)
    {
        int app = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == arr[i])
                app++;
        }
        if (app > max_app)
        {
            max_app = app;
            num = arr[i];
        }
    }
    return num;
}