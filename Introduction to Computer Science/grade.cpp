#include <iostream>
using std::cin, std::cout, std::string;
int main()
{
    int a, b, c;
    float average;
    char grade;
    string message;
    cout << "Grade for first test: ";
    cin >> a;
    cout << "Grade for second test: ";
    cin >> b;
    cout << "Grade for third test: ";
    cin >> c;
    average = (a + b + c) / 3.0;
    if (average >= 90)
    {
        grade = 'A';
        message = "Excellent!";
    }
    else if (average >= 80)
    {
        grade = 'B';
        message = "Good job!";
    }
    else if (average >= 70)
    {
        grade = 'C';
        message = "Fair!";
    }
    else if (average >= 60)
    {
        grade = 'D';
        message = "Needs improvement!";
    }
    else
    {
        grade = 'F';
        message = "Failing!";
    }
    cout << "Average: " << average << "\n";
    cout << "Grade: " << grade << "\n";
    cout << message << "\n";
    return 0;
}