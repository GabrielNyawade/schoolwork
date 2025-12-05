#include <iostream>
#include <cmath>

int main()
{
    const double pi = 3.1415926535;
    const float g = 9.81;
    float len;
    std::cout << "Enter length of pendulum >>> ";
    std::cin >> len;
    float t = 2*pi*std::sqrt(len/g);
    std::cout << "The period of the pendulum is " << t << "s.\n";
    return 0;
}
