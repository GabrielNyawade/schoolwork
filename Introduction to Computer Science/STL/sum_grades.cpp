// Write a C++ program that stores 10 integers in a vector, calculates the sum and average of all the elements present in the vector
#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector;

void display_ivec(vector<int> vec);

int main()
{
    vector<int> grades = {1,2,3,4,5,6,7,8,9,0};
    int sum = 0, n = 0;
    float average = 0;
    for (size_t i = 0; i < grades.size(); i++)
    {
        sum += grades.at(i);
        n++;
    }
    average = (float)sum / n;
    cout << "Vector: "; display_ivec(grades);
    cout << "Sum = " << sum << '\n';
    cout << "Average = " << average << '\n';
    return 0;
}

    void display_ivec(vector<int> vec)
    {
        for (int i: vec)
        {
            cout << i << " ";
        }
        cout << '\n';
    }