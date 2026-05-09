#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
    ifstream in("app.log");
    ofstream out("errors.log", ios::app); // append mode
    if (!in || !out)
    {
        cerr << "Open failed!\n";
        return 1;
    }
    int total = 0, info = 0, warn = 0, error = 0;
    string line;
    while (getline(in, line))
    {
        ++total;
        if (line.find("ERROR") != string::npos)
        {
            out << line << '\n';
            ++error;
        } else if (line.find("WARN") != string::npos) {
            ++warn;
        } else if (line.find("INFO") != string::npos) {
            ++info;
        }
    }
    cout << "Total: " << total 
    << "INFO = " << info
    << "WARN = " << warn
    << "ERROR = " << error << '\n';
    return 0;
}