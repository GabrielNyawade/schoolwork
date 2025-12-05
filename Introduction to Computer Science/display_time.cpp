#include <iostream>
#include <ctime>
using std::cin, std::cout;


int main()
{
    int hour, minute, second;
    cout << time(0) << "\n";
    second = time(0) % 60;
    minute = (time(0) % 3600) / 60;
    hour = (time(0) % 86400) / 3600;
    cout << hour << ":" << minute << ":" << second << "\n";
    return 0;
}