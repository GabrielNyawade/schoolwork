#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void f1(char str[]);
void f2(string str, char cstr[]);

int main()
{
    char cstr[20]; string cppstr;
    cin >> cstr; cin >> cppstr;
    f1(cstr);
    cout << cstr << endl;
    char newcstr[20];
    f2(cppstr, newcstr);
    cout << newcstr << endl;
    return 0;
}

void f1(char str[])
{
    strcpy(str, "Goodbye");
}

void f2(string str, char cstr[])
{
    strcpy(cstr, str.c_str());
}   