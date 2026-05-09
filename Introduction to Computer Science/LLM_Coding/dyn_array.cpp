// file: main.cpp
#include <iostream>
#include <limits>
using namespace std;

int readSize() {
    int n;
    cout << "Enter the number of elements: ";
    
    if (!(cin >> n) || n <= 0) {
        throw invalid_argument("Size must be a positive integer.");
    }
    return n;
}

int* allocateArray(int n) {
    try {
        return new int[n];
    } catch (const bad_alloc&) {
        throw runtime_error("Memory allocation failed.");
    }
}

void readElements(int* arr, int n) {
    cout << "Enter " << n << " integers: ";
    
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            throw invalid_argument("Invalid integer input.");
        }
    }
}

int computeSum(const int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

double computeAverage(int sum, int n) {
    return static_cast<double>(sum) / n; // avoid integer division
}

int main() {
    int* arr = nullptr;

    try {
        int n = readSize();

        arr = allocateArray(n);

        readElements(arr, n);

        int sum = computeSum(arr, n);
        double avg = computeAverage(sum, n);

        cout << "Sum: " << sum << endl;
        cout << "Average: " << avg << endl;

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    delete[] arr; // safe even if nullptr
    return 0;
}