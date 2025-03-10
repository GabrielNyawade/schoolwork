#include <iostream>
#include <math.h>

using namespace std;

class Rectangle
{
private:
    int l, w;
public:
    void set_values(int a, int b);
    int area(void);
    int perimeter(void);
    float diagonal(void);
};

void Rectangle::set_values(int a, int b)
{
    l = a;
    w = b;
    return;
}

int Rectangle::area(void)
{
    return l * w;
}

int Rectangle::perimeter(void)
{
    return (l + w) * 2;
}

float Rectangle::diagonal(void)
{
    return sqrt(l*l + w*w);
}

int main()
{
    Rectangle rect;
    int a, b;
    cout << "Enter dimensions for the rectangle:\n";
    cout << "Length >>> ";
    cin >> a;
    cout << "Width >>> ";
    cin >> b;
    rect.set_values(a, b);
    cout << "Area = " << rect.area() << endl;
    cout << "Perimeter = " << rect.perimeter() << endl;
    cout << "Diagonal = " << rect.diagonal() << endl;
    return 0;
}
