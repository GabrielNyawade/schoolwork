#include <iostream>
using namespace std;

int y = 0;

void t1(int& x);
void t2(int x);
void t3(int& counter);

int main()
{
    int x, counter = 0;
    cout << "Insert x: "; cin >> x;
    cout << "Insert y: "; cin >> y;
    t1(x); t2(x); t3(counter); t3(counter); t3(counter);
    cout << x << " " << y << " " << counter;
    
    return 0;
}

void t1(int& x)
{
    x++; y++;
}

void t2(int x)
{
    x++;
}

void t3(int& counter)
{
    counter++;
}