// file: main.cpp
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Need at least two elements." << endl;
        return 1;
    }

    int* arr = new int[n];

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = numeric_limits<int>::min();
    int secondLargest = numeric_limits<int>::min();

    for (int i = 0; i < n; i++) {
        int value = arr[i];

        if (value > largest) {
            secondLargest = largest;
            largest = value;
        } 
        else if (value > secondLargest && value != largest) {
            secondLargest = value;
        }
    }

    if (secondLargest == numeric_limits<int>::min()) {
        cout << "No second largest distinct element found." << endl;
    } else {
        cout << "Second largest element: " << secondLargest << endl;
    }

    delete[] arr;
    return 0;
}