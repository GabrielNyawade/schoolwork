#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;
int main()
{
    // Seed the random number generator
    srand(time(0)); // Directly passing time(0)
    // Generate two random single-digit numbers
    int n1 = rand() % 10; // Random number 0..9
    int n2 = rand() % 10; // Random number 0..9
    
    // Display the question to the user
    cout << "What is " << n1 << " - " << n2 << "? ";

    // Get the user's answer (apparently this should be checked to be an integer or not)
    // Input needs to be changed?
    int userAnswer;
    if (cin >> userAnswer)
    {
        // Calculate the correct answer
        int correctAnswer = n1 - n2;
        // Check if the user's answer is correct
        if (userAnswer == correctAnswer)
        {
            cout << "Correct! Great job!" << endl;
        }
        else
        {
            cout << "Incorrect. The correct answer is " << correctAnswer << "." << endl;
        }
    }
    else
    {
        cout << "Invalid input!" << endl;
    }
    
    return 0;
}
