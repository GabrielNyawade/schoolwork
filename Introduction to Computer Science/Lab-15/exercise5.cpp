#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int *p;

    cin >> x;
    p = &x;
    *p = 20;

    cin >> y;
    p = &y;
    *p = 50;

    int t = *p;
    *p = 100;

    cout << "x = " << x << " y = " << y << " t = " << t << endl;

    return 0;
}