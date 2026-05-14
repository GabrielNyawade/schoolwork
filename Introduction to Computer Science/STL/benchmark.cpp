#include <iostream>
#include <array>
#include <vector>
#include <time.h>
using std::cin, std::cout, std::array, std::vector;
int main()
{
    array<int, 1000> iarray;
    vector<int> ivec;
    clock_t start = clock();
    for (int i = 0; i < 1000; i++)
    {
        iarray.at(i) = i+1;
    }
    clock_t end = clock();
    cout << "Time to fill STL array of 1000 elements: " << (double)(end - start) / CLOCKS_PER_SEC << "s.\n";
    start = clock();
    for (int i = 0; i < 1000; i++)
    {
        ivec.push_back(i+1);
    }
    end = clock();
    cout << "Time to fill STL vector with 1000 elements: " << (double)(end - start) / CLOCKS_PER_SEC << "s.\n";
    return 0;
}