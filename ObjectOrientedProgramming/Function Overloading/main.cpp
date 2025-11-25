#include <iostream>

int from_ascii(char letter)
{
    return int(letter);
}

/*

float from_ascii(char letter)   // ERROR: cannot overload functions distinguished by return type alone
{
    return float(letter);
}
*/

char ascii(int number)
{
    return char(number);
}
char ascii(float number)
{
    return char(number);
}

int main()
{
    std::cout << ascii(64) << std::endl;
    for (int i = from_ascii('A'); i <= from_ascii('Z'); i++)
    {
        std::cout << ascii(i) << ", " << ascii(i + 32) << "\n";
    }

    return 0;
}
