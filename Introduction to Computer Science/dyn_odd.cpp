#include <iostream>
using std::cin, std::cout;

int main()
{
    int *p_arr = nullptr;
    int *p_odd = nullptr;
    int n = 0;
    int odd = 0;
    cout << "Enter number of elements in array: ";
    cin >> n;
    p_arr = new int[n];
    cout << "Enter elements; \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i+1 << ": ";
        cin >> *(p_arr+i);
        if (*(p_arr+i)%2 == 1)
            odd++;
    }
    p_odd = new int[odd];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(p_arr+i)%2 == 1)
        {
            *(p_odd+j) = *(p_arr+i);
            j++;
        }
    }
    for (int i = 0; i < odd; i++)
    {
        cout << *(p_odd+i) << " ";
    }
}