#include <iostream>
using std::cin, std::cout;

int main()
{
    int n = 0;
    float sum = 0;
    float avg = 0;
    cout << "Number of entries: ";
    cin >> n;
    float *f_arr = new float[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Entry " << i+1 << ": ";
        cin >> *(f_arr+i);
        sum += *(f_arr+i);
    }
    avg = sum/n;
    cout << "Average: " << avg << '\n';
    cout << "Outstanding values: ";
    for (int i = 0; i < n; i++)
    {
        if(*(f_arr+i) > avg)
            cout << *(f_arr+i) << " ";
    }
    cout << '\n';
    return 0;
}