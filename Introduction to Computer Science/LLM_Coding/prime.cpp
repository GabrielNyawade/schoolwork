// file: main.cpp
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;

    cout << "Enter an integer: ";
    
    if (!(cin >> number)) {
        cout << "Invalid input." << endl;
        return 1;
    }

    if (isPrime(number)) {
        cout << number << " is Prime." << endl;
    } else {
        cout << number << " is Not Prime." << endl;
    }

    return 0;
}