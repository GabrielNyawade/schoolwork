#include <iostream>

int main()
{
    int num[3] = {2, 5, 4};
    for (int var : num)
        std::cout << var << " ";

    std::cout << "\n";

    int input;
    do
    {
        std::cout << "Enter a positive number >>> ";
        std::cin >> input;
    } while (input <= 0);
    
    return 0;
}
