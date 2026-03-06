#include <iostream>
void reverse(int arr[], int size);
void print(int arr[], int size);
int main()
{
    int myArray[5] = {0, 8, 4, 5 ,2};
    std::cout << "Original array: ";
    print(myArray, 5);
    reverse(myArray, 5);
    std::cout << "Reversed array: ";
    print(myArray, 5);
    return 0;
}
void reverse(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size/2; i++)
    {
        temp = arr[(size-1) - i];
        arr[(size-1) - i] = arr[i];
        arr[i] = temp;
    }
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