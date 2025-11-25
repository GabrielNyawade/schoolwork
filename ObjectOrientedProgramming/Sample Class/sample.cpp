#include <iostream>

class Sample
{
private:
    int a;
    int b;
public:
    void set_values()
    {
        std::cout << "Enter first value >>> ";
        std::cin >> a;
        std::cout << "Enter second value >>> ";
        std::cin >> b;
    }
    friend float mean(Sample);
};

float mean(Sample s)
{
    return float(s.a + s.b) / 2.0;
}

int main()
{
    Sample sample_0;
    sample_0.set_values();
    std::cout << "Mean = " << mean(sample_0) << std::endl;
}