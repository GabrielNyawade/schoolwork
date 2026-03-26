#include <iostream>
using std::cin, std::cout;

int findMin(const int* p, int size);
int findMax(const int* p, int size);
double computeAvg(const int* p, int size);

int main()
{
    int grades[6] = {72, 85, 90, 61, 78, 95};
    cout << "Maximum Grade: " << findMax(grades, 6) << '\n';
    cout << "Minimum Grade: " << findMin(grades, 6) << '\n';
    cout << "Average: " << computeAvg(grades, 6) << '\n';
    return 0;
}
int findMin(const int* p, int size)
{
    int val = *p;
    for (int i = 1; i < size; i++)
    {
        if (*(p+i) < val) val = *(p+i);
    }
    return val;
}
int findMax(const int* p, int size)
{
    int val = *p;
    for (int i = 1; i < size; i++)
    {
        if (*(p+i) > val) val = *(p+i);
    }
    return val;
}
double computeAvg(const int* p, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(p+i);
    }
    sum /= size;
    return sum;
}