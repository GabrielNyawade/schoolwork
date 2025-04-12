#include <iostream>
#define EPSILON 1e6

long long gcd(long long a, long long b)
{
    if (b == 0) return a;
    else return gcd(b, a % b);
}


class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction()
    {
        numerator = 0;
        denominator = 1;
    }
    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;
        if (denominator == 0)
        {
            std::cerr << "Denominator cannot be equal to zero!\n";
            numerator = 0;
            denominator = 1;
        }
        else
        {
            int divisor = gcd(numerator, denominator);
            if (divisor != 1)
            {
                numerator = numerator / divisor;
                denominator = denominator / divisor;
            }
            if (denominator < 0)
            {
                numerator *= -1;
                denominator *= -1;
            }
        }
    }
    Fraction(double number)
    {
        if (number == 0)
        {
            numerator = 0;
            denominator = 1;
        }
        else
        {
            long long n = (number * EPSILON) - (number * EPSILON / 10);
            long long d = EPSILON - (EPSILON / 10);
            long long divisor = gcd(n, d);
            // std::cout << n << ", " << EPSILON << ", " << divisor << "\n";
            if (divisor != 1)
            {
                n /= divisor;
                d /= divisor;
            }
            numerator = n;
            denominator = d;
            
        }
    }

    // we need a function to cast a fraction to a floating point data type
    operator float()
    {
        return float(numerator) / denominator;
    }

    Fraction operator+(Fraction& other);
    Fraction operator+(int number); // overloaded functions for interaction with primitive data type int
    friend Fraction operator+(int number, Fraction& f);

    Fraction operator-(Fraction& other);
    Fraction operator-(int number);
    friend Fraction operator-(int number, Fraction &f);

    Fraction operator*(Fraction& other);
    Fraction operator*(int number);
    friend Fraction operator*(int number, Fraction &f);

    Fraction operator/(Fraction& other);
    Fraction operator/(int number);
    friend Fraction operator/(int number, Fraction &f);

    Fraction operator~();   // reciprocal overloaded operator

    bool operator==(Fraction& other);
    
    void display_fraction();
    // input and output stream functions
    friend std::istream &operator>>(std::istream &in, Fraction &f);
    friend std::ostream &operator<<(std::ostream &out, const Fraction &f);
};

Fraction Fraction::operator+(Fraction &other)
{
    int common = denominator * other.denominator;
    int leftval = common / denominator;
    int rightval = common / other.denominator;
    int n = leftval + rightval;
    int divisor = gcd(n, common);
    if (divisor != 1)
    {
        n = n / divisor;
        common = common / divisor;
    }
    return Fraction(n, common);
}

Fraction Fraction::operator+(int number)
{
    int n = numerator + number * denominator;
    return Fraction(n, denominator);
}

Fraction operator+(int number, Fraction& f)
{
    int n = number * f.denominator + f.numerator;
    return Fraction(n, f.denominator);
}

Fraction Fraction::operator-(Fraction& other)
{
    int common = denominator * other.denominator;
    int leftval = common / denominator;
    int rightval = common / other.denominator;
    int n = leftval - rightval;
    int divisor = gcd(n, common);
    if (divisor != 1)
    {
        n = n / divisor;
        common = common / divisor;
    }
    return Fraction(n, common);
}

Fraction Fraction::operator-(int number)
{
    int n = numerator - number * denominator;
    return Fraction(n, denominator);
}

Fraction operator-(int number, Fraction &f)
{
    int n = number * f.denominator - f.numerator;
    return Fraction(n, f.denominator);
}

Fraction Fraction::operator*(Fraction& other)
{
    int n = numerator * other.numerator;
    int d = denominator * other.denominator;
    int divisor = gcd(n, d);
    if (divisor != 1)
    {
        n = n / divisor;
        d = d / divisor;
    }
    return Fraction(n, d);
}

Fraction Fraction::operator*(int number)
{
    int n = number * numerator;
    return Fraction(n, denominator);
}

Fraction operator*(int number, Fraction &f)
{
    int n = number * f.numerator;
    return Fraction(n, f.denominator);
}

Fraction Fraction::operator/(Fraction& other)
{
    // reciprocating the other fraction
    int temp;
    temp = other.numerator;
    other.numerator = other.denominator;
    other.denominator = temp;

    int n = numerator * other.numerator;
    int d = denominator * other.denominator;
    int divisor = gcd(n, d);
    if (divisor != 1)
    {
        n = n / divisor;
        d = d / divisor;
    }
    return Fraction(n, d);
}

Fraction Fraction::operator/(int number)
{
    int d = denominator * number;
    return Fraction(numerator, d);
}

Fraction operator/(int number, Fraction &f)
{
    int n = number * f.denominator;
    return Fraction(n, f.numerator);
}

Fraction Fraction::operator~()
{
    return Fraction(denominator, numerator);
}

bool Fraction::operator==(Fraction &other)
{
    if (numerator == other.numerator && denominator == other.denominator) return true;
    else return false;
}

void Fraction::display_fraction()
{
    if (denominator == 1)
        std::cout << numerator << "\n";
    else
        std::cout << numerator << "/" << denominator << "\n";
}

std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
    if (f.denominator == 1)
        out << f.numerator;
    else
        out << f.numerator << "/" << f.denominator;
        
    return out;
}

std::istream& operator>>(std::istream& in, Fraction& f)
{
    using std::cout, std::cerr;
    cout << "Numerator: ";
    in >> f.numerator;
    cout << "Denominator (!= 0): ";
    in >> f.denominator;
    if (f.denominator == 0)
    {
        cerr << "Undefined! Resetting to 0/1\n";
        f.numerator = 0;
        f.denominator = 1;
    }
    int divisor = gcd(f.numerator, f.denominator);
    if (divisor != 1)
    {
        f.numerator /= divisor;
        f.denominator /= divisor;
    }
    return in;
}

int main()
{
    std::cout << 1 << " + " << Fraction(2, 3) << " = " << Fraction(1 + Fraction(2, 3)) << "\n";
    std::cout << Fraction(3.1) << "\n";
    return 0;
}