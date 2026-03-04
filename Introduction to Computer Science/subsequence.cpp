#include <iostream>
#include <string>
using std::cout, std::cin, std::endl, std::string;
// Ordered such that s1 is checked to be a substring of s2
bool isSub(string s1, string s2); 
int main()
{
    string input1, input2;
    cout << "Enter a word: ";
    cin >> input2;
    cout << "Enter a word shorter than the previous input: ";
    cin >> input1;
    if (isSub(input1, input2))
        cout << "\"" << input1 << "\" is contained in the word \"" << input2 << "\"\n";
    else
        cout << "\"" << input1 << "\" is not contained in the word \"" << input2 << "\"\n";
    return 0;
}
bool isSub(string s1, string s2)
{
    int len_s1 = s1.length();
    int len_s2 = s2.length();
    for (int i = 0; i < len_s2; i++)
    {
        int matched = 0;
        for (int j = 0; j < len_s1 && i+j < len_s2; j++)
        {
            if (s1.at(j) == s2.at(i+j))
                matched++;
            if (matched == len_s1)
                return true;
        }
    }
    return false;
}