#include <iostream>
#define BASE_FARE 5
int main()
{
    // Base fare: 5€
    // 2€/km if distance < 10km, else 1.5€
    int kms;
    int fare = BASE_FARE;
    std::cout << "Number of kilometres covered: ";
    std::cin >> kms;
    
    if (kms < 0)
    {
        std::cout << "Invalid input!\n";
        return 0;
    }
    else if (kms <= 10)
        fare += kms * 2;
    else
        fare += kms * 1.5;

    std::cout << "Total fare is: " << fare << " euros.\n";

    return 0;
}