#include <iostream>

int main()
{
    int year;
    std::cout << "Enter the year >>> ";
    std::cin >> year;
    switch (year % 12)
    {
    case 0:
        std::cout << "monkey" << std::endl;
        break;
    case 1:
        std::cout << "rooster" << std::endl;
        break;
    case 2:
        std::cout << "dog" << std::endl;
        break;
    case 3:
        std::cout << "pig" << std::endl;
        break;
    case 4:
        std::cout << "rat" << std::endl;
        break;
    case 5:
        std::cout << "ox" << std::endl;
        break;
    case 6:
        std::cout << "tiger" << std::endl;
        break;
    case 7:
        std::cout << "rabbit" << std::endl;
        break;
    case 8:
        std::cout << "dragon" << std::endl;
        break;
    case 9:
        std::cout << "snake" << std::endl;
        break;
    case 10:
        std::cout << "horse" << std::endl;
        break;
    case 11:
        std::cout << "sheep" << std::endl;
        break;
    default:
        break;
    }
    return 0;
}