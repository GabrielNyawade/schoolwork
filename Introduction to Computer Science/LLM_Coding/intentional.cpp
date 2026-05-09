// file: main.cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int* arr = new int[n]; // first allocation

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Memory leak happens here:
    // original pointer is overwritten, no delete[] called
    arr = new int[10]; 

    for (int i = 0; i < 10; i++) {
        arr[i] = (i + 1) * 10;
    }

    cout << "New array values: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // only frees second allocation

    return 0;
}