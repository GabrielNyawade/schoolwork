#include <iostream>
#include <string>
using std::cin, std::cout, std::string;
int main()
{
    string text, text_rvrs;
    cout << "Enter the word to check: ";
    cin >> text;
    int len_txt = text.length();
    for (int i = 0; i < len_txt; i++) // to lowercase
    {
        text[i] = tolower(text[i]);
    }
    for (int i = len_txt - 1; i >= 0; i--)
    {
        text_rvrs += text[i];
    }
    cout << text_rvrs << "\n";
    text_rvrs == text ? cout << "Yes\n" : cout << "No\n";
    return 0;
}