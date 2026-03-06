#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector;
void bubble_sort(vector<int>& vec);
void display_ivec(const vector<int>& vec);
int main()
{
    vector<int> myArr = {5, 2, 9, 1, 5, 6};
    cout << "Original array: ";
    display_ivec(myArr);
    bubble_sort(myArr);
    cout << "Sorted array: ";
    display_ivec(myArr);
    return 0;
}
void bubble_sort(vector<int>& vec)
{
    int temp;
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (vec[j] > vec[j+1])
            {
                temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
}
void display_ivec(const vector<int>& vec)
{
    int n = vec.size();
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << vec[i];
        if (i < n - 1)
            cout << ", ";

    }
    cout << "}\n";
}