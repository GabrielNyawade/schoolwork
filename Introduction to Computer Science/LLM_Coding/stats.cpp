// Function that takes a vector of doubles and returns the mean, min, and max
#include <iostream>
#include <vector>
#include <limits>
using namespace std;
struct Stats {
    double mean;
    double min;
    double max;
};
Stats calculateStats(const vector<double>& numbers) {
    Stats stats;
    if (numbers.empty()) {
        stats.mean = 0;
        stats.min = 0;
        stats.max = 0;
        return stats;
    }
    double sum = 0;
    stats.min = numeric_limits<double>::max();
    stats.max = numeric_limits<double>::lowest();
    for (double num : numbers) {
        sum += num;
        if (num < stats.min) {
            stats.min = num;
        }
        if (num > stats.max) {
            stats.max = num;
        }
    }
    stats.mean = sum / numbers.size();
    return stats;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<double> numbers(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    Stats stats = calculateStats(numbers);
    cout << "Mean: " << stats.mean << endl;
    cout << "Min: " << stats.min << endl;
    cout << "Max: " << stats.max << endl;
    return 0;
}