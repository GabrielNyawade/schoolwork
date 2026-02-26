#include <iostream>
using namespace std;

int main()
{
    int num;
    int dec_value = 0;
    int base = 1;
    cout << "Enter number in binary format: ";
    cin >> num;
    while (num != 0)
    {  
        dec_value = dec_value + (num % 10) * base;
        num = num / 10;
        base = base * 2;
    }

    cout << dec_value << "\n";
    return 0;
}