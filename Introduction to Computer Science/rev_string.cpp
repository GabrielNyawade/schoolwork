#include <iostream>
#include <string.h>
using std::cin, std::cout, std::string;
int main()
{
    char input[1024];
    cout << "Enter string: ";
    fgets(input, sizeof(input), stdin);
    char* pC = input + strcspn(input, "\n") - 1;
    cout << input << '\n';
    // cout << *pC << '\n';
    for (int i = 0; i < strlen(input); i++)
    {
        cout << *(pC-i);
    }
    cout << '\n';
}