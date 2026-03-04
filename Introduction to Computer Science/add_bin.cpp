#include <iostream>
#include <string>
using std::cin, std::cout, std::string;
string add_bin(string bin1, string bin2);
int main()
{
    string input1, input2;
    cout << "Enter binary number n1: ";
    cin >> input1;
    cout << "Enter binary number n2: ";
    cin >> input2;
    cout << add_bin(input1, input2) << "\n";
    return 0;
}
string add_bin(string bin1, string bin2)
{
    string result;
    while (bin1.length() != bin2.length())
    {
        if (bin1 > bin2) bin2.insert(bin2.begin(), '0');
        else bin1.insert(bin1.begin(), '0');
    }
    int carry_buf = 0;
    for (int i = bin1.length(); i > 0; i--)
    {
        int buf1 = bin1.at(i-1) - '0';
        int buf2 = bin2.at(i-1) - '0';
        int sum_buf = carry_buf + buf1 + buf2;
        char mod = (sum_buf % 2) + '0';
        char carry = (sum_buf / 2) + '0';
        result.insert(result.begin(), mod);
        carry_buf = (buf1 + buf2) / 2;
    }
    result.insert(result.begin(), carry_buf + '0');
    return result;
}