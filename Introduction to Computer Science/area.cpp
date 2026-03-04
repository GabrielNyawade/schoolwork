#include <iostream>
#define PI 3.142
using std::cout, std::cin;
// one area() function, overloaded for three geometrical objects: rectangle[l, w], triangle[b, h], and cylinder[r, h].
float area(int l, int w);
float area(int b, float h);
float area(float r, float h);

int main()
{
    int length = 7;
    int width = 10;
    int base = 12;
    float height = 7;
    float radius = 3;
    cout << "Area of Rectangle: " << area(length, width) << "\n";
    cout << "Area of Triangle: " << area(base, height) << "\n";
    cout << "Area of Cylinder: " << area(radius, height) << "\n";

    return 0;
}

float area(int l, int w)
{
    return l*w;
}
float area(int b, float h)
{
    return b * h / 2;
}
float area(float r, float h)
{
    return 2 * PI * r * (r + h);
}