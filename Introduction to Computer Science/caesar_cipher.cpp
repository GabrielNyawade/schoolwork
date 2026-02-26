#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string encrypt(string input, int shift)
{
    int len = input.length();
    for (int i = 0; i < len; i++)
    {
        input[i] = toupper(input[i]);
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            if(input[i] + shift > 'Z')
            {
                input[i] -= 26;
            }
            input[i] += shift;
        }
    }
    return input;
}

string decrypt(string input, int shift)
{
    int len = input.length();
    for (int i = 0; i < len; i++)
    {
        input[i] = toupper(input[i]);
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            if(input[i] - shift < 'A')
            {
                input[i] += 26;
            }
            input[i] -= shift;
        }
    }
    return input;
}

int main()
{
    string text;
    int shift_val;
    cout << "Enter the text to be ciphered: ";
    getline(cin, text);
    cout << "Enter the shift value: ";
    cin >> shift_val;
    string cipher_text = encrypt(text, shift_val);
    cout << cipher_text << "\n" << decrypt(cipher_text, shift_val) << "\n";
    return 0;
}
