#include <iostream>
#include <algorithm>

using std::cin, std::cout, std::sort;
// using namespace std;
int main()
{   
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number >>> ";
        cin >> arr[i];
    }
    
    // Sort array in ascending order
    // int buf;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[j] < arr[i])
    //         {
    //             buf = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = buf;
    //         }
    //     }
    // }
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}