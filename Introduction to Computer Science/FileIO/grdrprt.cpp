#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    ifstream input;
    input.open("grades.csv");
    ofstream output;
    output.open("report.txt");
    if(!input.is_open())
    {
        cerr << "File not found!\n";
        return 1;
    }
    cout << "File opened successfully.\n";
    string text;
    while (getline(input, text))
    {
        istringstream iss(text);
        string name, field;
        getline(iss, name, ','); // first field = name
        int sum = 0, n = 0;
        while (getline(iss, field, ',')) // remaining = scores
        {
            sum += stoi(field);
            ++n;
        }
        double avg = (n > 0) ? double(sum) / n : 0.0;
        output << name << " avg = " << avg << " " << (avg >= 60 ? "PASS" : "FAIL") << '\n';
    }
    return 0;
}