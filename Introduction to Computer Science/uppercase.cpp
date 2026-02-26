#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string text;
    cout << "Enter text: ";
    getline(cin, text);
    int len = text.length();
    for (int i = 0; i < len; i++)
    {
        text[i] = toupper(text[i]);
    }
    cout << text << "\n";
    return 0;
}