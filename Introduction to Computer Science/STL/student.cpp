// Write a C++ program that reads grades of 5 students and stores them in a vector. Calculate the average grade, maximum grade and minimum grade
#include <iostream>
#include <vector>
#include <limits>
using std::cin, std::cout, std::vector, std::numeric_limits;
void display_ivec(vector<int> vec)
{
    for (int i: vec)
    {
        cout << i << " ";
    }
    cout << '\n';
}
int main()
{
    vector<int> grades;
    int sum = 0;
    float average = 0;
    int max = numeric_limits<int>::min();
    int min = numeric_limits<int>::max();
    cout << "Enter grades of 5 students:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i+1 << ": ";
        int input = 0;
        cin >> input;
        grades.push_back(input);
        sum += grades.at(i);
        if (grades.at(i) < min) min = grades.at(i);
        if (grades.at(i) > max) max = grades.at(i);
    }
    average = (float)sum / 5;
    cout << "Vector: "; display_ivec(grades);
    cout << "Average = " << average << '\n';
    cout << "Maximum = " << max << '\n';
    cout << "Minimum = " << min << '\n';

    return 0;
}