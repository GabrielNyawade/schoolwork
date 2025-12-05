#include <iostream>
using namespace std;
int main()
{
    int area, minutes;
    double tariff;
    // Prompt the user to enter the area number
    cout << "Enter the area number (1, 2, 3, or 4): ";
    cin >> area;
    // Prompt the user to enter the number of minutes parked
    cout << "Enter the number of minutes parked: ";
    cin >> minutes;
    if (minutes <=0)
    {
        cout << "Invalid duration!";
        return 0;
    }
    // Convert the minutes to hours (floating-point division)
    double hours = minutes / 60.0;
    // Determine the tariff based on the area using if-else
    if (area == 1)
    {
        tariff = hours * 0.5;
    }
    else if (area == 2)
    {
        tariff = hours * 1.0;
    }
    else if (area == 3)
    {
        tariff = hours * 1.5;
    }
    else if (area == 4)
    {
        tariff = hours * 2.0;
    }
    else
    {
        cout << "Invalid area number!" << endl;
        return 1; // Exit the program if the area number is invalid
    }
    // Output the resulting tariff
    if (tariff > 20) tariff = 20;
    cout << "The total parking tariff is: " << tariff << "€" << endl;
    return 0;
}