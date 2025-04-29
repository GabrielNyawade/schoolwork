#include <iostream>
class Shape
{
protected:
    float width, height;
public:
    void setShape(float w = 0, float h = 0)
    {
        width = w;
        height = h;
    }
};

class Rectangle: public Shape
{
public:
    float area(void)
    {
        return width * height;
    }
};

class Triangle: public Shape
{
public:
    float area(void)
    {
        return width * height / 2;
    }
};

int main()
{
    Rectangle rect;
    Triangle tri;
    rect.setShape(12.5, 25);
    tri.setShape(15, 12.5);
    std::cout << "Rectangle AREA: " << rect.area() << std::endl;
    std::cout << "Triangle AREA: " << tri.area() << std::endl;
    return 0;
}
