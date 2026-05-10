#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
void reverse_write(ifstream& in, ofstream& out) {
    string line;
    if (getline(in, line)) {
        reverse_write(in, out);
        out << line << '\n';
    }
}
int main() {
    ifstream input("poem.txt");
    ofstream output("poem_rev.txt");
    if (!input || !output) {
        cerr << "Open failed.\n";
        return 1;
    } else {
        cout << "File opened successfully.\n";
    }
    reverse_write(input, output);
}       