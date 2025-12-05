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
    
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}