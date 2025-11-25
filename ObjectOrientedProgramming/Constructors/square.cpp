#include <iostream>
#include <math.h>


using namespace std;
class Square
{
private:
    double side;
public:
    Square()            // default constuctor,
    {
        side = 0;
    }
    Square(double s)    // parameterised constructor,
    {
        side = s;
    }
    Square(Square& sq)  // copy constructor, all utilising function overloading
    {
        side = sq.side;
    }
    double area();
    void amalgamate(Square sq);
    Square operator+(Square sq)
    {
        return Square(sqrt(area() + sq.area()));
    }
    
    void display();
};

double Square::area()
{
    return side * side;
}

void Square::amalgamate(Square sq)
{
    side = sqrt(area() + sq.area());
}

void Square::display()
{
    std::cout << side << "\" x " << side << "\"\n";
}

int main()
{
    Square sq1 = Square(2);
    Square sq2(4);
    Square sq3 = sq1 + sq2;
    sq1.amalgamate(sq2);
    sq1.display();
    sq3.display();
    return 0;
}