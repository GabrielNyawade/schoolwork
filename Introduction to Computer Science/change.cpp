#include <iostream>

int main()
{
    float amount;
    std::cout << "Enter amount >>> ";
    std::cin >> amount;
    // rounds off to the lower-bounding cent, works in our favour in this case (giving less change to the customer guarantees profit)
    int rounded = amount * 100;
    // std::cout << rounded << "\n";
    int eur_2, eur_1, cent_50, cent_20, cent_10, cent_5, cent_2, cent_1;
    eur_2 = rounded / 200;
    rounded %= 200;
    eur_1 = rounded / 100;
    rounded %= 100;
    cent_50 = rounded / 50;
    rounded %= 50;
    cent_20 = rounded / 20;
    rounded %= 20;
    cent_10 = rounded / 10;
    rounded %= 10;
    cent_5 = rounded / 5;
    rounded %= 5;
    cent_2 = rounded / 2;
    rounded %= 2;
    cent_1 = rounded / 1;
    rounded %= 1;

    // Output
    std::cout << "Amount: " << amount << " euro\n";
    std::cout << "Change:\n";
    std::cout << "2 euro coins: " << eur_2 << "\n";
    std::cout << "1 euro coins: " << eur_1 << "\n";
    std::cout << "50 cent coins: " << cent_50 << "\n";
    std::cout << "20 cent coins: " << cent_20 << "\n";
    std::cout << "10 cent coins: " << cent_10 << "\n";
    std::cout << "5 cent coins: " << cent_5 << "\n";
    std::cout << "2 cent coins: " << cent_2 << "\n";
    std::cout << "1 cent coins: " << cent_1 << "\n";
    return 0;
}