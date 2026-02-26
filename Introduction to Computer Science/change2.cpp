#include <iostream>
using namespace std;

int main()
{
    //define coin values in cents
    const int coins2Euro = 200;
    const int coins1Euro = 100;
    const int coins50Cent = 50;
    const int coins20Cent = 20;
    const int coins10Cent = 10;
    const int coins5Cent = 5;
    const int coins2Cent = 2;
    const int coins1Cent = 1;

    double amount;
    cout << "Enter an amount in euros (e.g. 12.34): ";
    cin >> amount;
    
    int totalCents = static_cast<int>(amount * 100 + 0.5); // to nearest cent (upper bound)
    int count2Euro = totalCents / coins2Euro;
    totalCents %= coins2Euro;
    int count1Euro = totalCents / coins1Euro;
    totalCents %= coins1Euro;
    int count50Cent = totalCents / coins50Cent;
    totalCents %= coins50Cent;
    int count20Cent = totalCents / coins20Cent;
    totalCents %= coins20Cent;
    int count10Cent = totalCents / coins10Cent;
    totalCents %= coins10Cent;
    int count5Cent = totalCents / coins5Cent;
    totalCents %= coins5Cent;
    int count2Cent = totalCents / coins2Cent;
    totalCents %= coins2Cent;
    int count1Cent = totalCents / coins1Cent;
    totalCents %= coins1Cent;

    cout << "Optimal change:\n";
    if (count2Euro > 0) cout << count2Euro << " coin(s) of 2 euro(s)\n";
    if (count1Euro > 0) cout << count1Euro << " coin(s) of 1 euro(s)\n";
    if (count50Cent > 0) cout << count50Cent << " coin(s) of 50 cent(s)\n";
    if (count20Cent > 0) cout << count20Cent << " coin(s) of 20 cent(s)\n";
    if (count10Cent > 0) cout << count10Cent << " coin(s) of 10 cent(s)\n";
    if (count5Cent > 0) cout << count5Cent << " coin(s) of 5 cent(s)\n";
    if (count2Cent > 0) cout << count2Cent << " coin(s) of 2 cent(s)\n";
    if (count1Cent > 0) cout << count1Cent << " coin(s) of 1 cent(s)\n";
    return 0;
}