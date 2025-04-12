#include <iostream>
#define PI 3.142
#define FENCE_PRICE 3000.00
#define CONCRETE_PRICE 4200.00

class Pool
{
private:
    float radius;
public:
    Pool()
    {
        radius = 0;
    }
    Pool(float r)
    {
        radius = r;
    }
    Pool(Pool& p)
    {
        radius = p.radius;
    }
    float area()
    {
        return PI * radius * radius;
    }
    float circumference()
    {
        return 2 * PI * radius;
    }
};

int main()
{
    float rad, fence_cost, conc_cost;
    std::cout << "Enter the radius of the pool: ";
    std::cin >> rad;
    // two objects created, one for the inner, one for the outer
    Pool inner(rad);
    Pool outer(rad + 6);
    fence_cost = outer.circumference() * FENCE_PRICE;
    conc_cost = (outer.area() - inner.area()) * CONCRETE_PRICE;
    std::cout << "Total cost for the footpath: " << conc_cost << std::endl;
    std::cout << "Total cost for the fence: " << fence_cost << std::endl;
    return 0;
}
