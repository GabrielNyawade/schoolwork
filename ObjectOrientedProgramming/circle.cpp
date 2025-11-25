#include <iostream>
#include <math.h>

class Circle
{
private:
    float r;
public:
    void set_radius(float r);
    float area(void);
    float circumference(void);

};

void Circle::set_radius(float radius)
{
    r = radius;
    
}

float Circle::area()
{
    return M_PI * r * r;
}

float Circle::circumference()
{
    return 2 * M_PI * r;
}

int main()
{
    Circle circle_0;
    float rad_0;
    std::cout << "Enter radius for circle >>> ";
    std::cin >> rad_0;
    circle_0.set_radius(rad_0);

    std::cout << "Area = " << circle_0.area() << std::endl;
    std::cout << "Circumference = " << circle_0.circumference() << std::endl;
    return 0;
}