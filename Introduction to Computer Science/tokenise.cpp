#include <iostream>
#include <string>
using std::string, std::cin, std::cout;
int main()
{
    string input;
    char del;
    cout << "Enter the string you want to split: ";
    cin >> input;
    cout << "Enter the delimiter character: ";
    cin >> del;
    string temp;
    int len = input.size();
    for (int i = 0; i < len; i++)
    {
        if (input[i] != del)
        {
            temp += input[i];
        }
        else
        {
            cout << temp << "\n";
            temp = "";
        }
    }
    if (temp.size() != 0) cout << temp << "\n";
    cout << "String splitting completed.\n";
    return 0;
}