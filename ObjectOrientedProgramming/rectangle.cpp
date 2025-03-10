#include <iostream>
#include <math.h>


class CRectangle
{
    private:
    float l;
    float w;
    public:
    void set_values(float, float);
    float area(void);
    float perimeter(void);
    float diagonal(void);
};

void CRectangle::set_values(float length, float width)
{
    l = length;
    w = width;
    return;
}

float CRectangle::area()
{
    return l * w;
}

float CRectangle::perimeter()
{
    return 2 * (l + w);
}

float CRectangle::diagonal()
{
    return sqrt(l*l + w*w);
}

bool isEqual(CRectangle& rect1, CRectangle& rect2)
{
    rect1.area() == rect2.area() ? true: false;
}

int main()
{
    int num_obj;
    std::cout << "Enter number of objects you wish to create >>> ";
    std::cin >> num_obj;
    
    CRectangle rect[num_obj];
    int a, b, i;
    for (i = 0; i < num_obj; i++)
    {
        std::cout << "Set dimensions for rectangle " << i + 1 << ":" << std::endl;
        std::cout << "Length = ";
        std::cin >> a;
        std::cout << "Width = ";
        std::cin >> b;
        rect[i].set_values(a, b);
    }
    std::cout << "\n\n";
    for (i = 0; i < num_obj; i++)
    {
        std::cout << "Area (Rectangle " << i + 1 << ") = " << rect[i].area() << std::endl;
        std::cout << "Perimeter (Rectangle " << i + 1 << ") = " << rect[i].perimeter() << std::endl;
        std::cout << "Diagonal (Rectangle " << i + 1 << ") = " << rect[i].diagonal() << std::endl;
        std::cout << "\n\n";
    }
    

    return 0;
}