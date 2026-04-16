#include <iostream>
using std::cin, std::cout;

int main()
{
    int *arr1 = new int[100];
    int *arr2 = new int[50];
    arr2 = arr1;
    delete[] arr2;
}