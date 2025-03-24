#include <iostream>

using namespace std;

class ABC; // forward declaration
class PQR; // forward declaration

class XYZ
{
    int x;
public:
    void setvalue()
    {
        int i;
        cout << "Enter first number: ";
        cin >> i;
        x = i;
    }
    friend void maxval(XYZ, ABC, PQR);
};

class ABC
{
    int a;
public:
    void setvalue()
    {
        int i;
        cout << "Enter second number: ";
        cin >> i;
        a = i;
    }
    friend void maxval(XYZ, ABC, PQR);
};

class PQR
{
    int p;
public:
    void setvalue()
    {
        int i;
        cout << "Enter third number: ";
        cin >> i;
        p = i;
    }
    friend void maxval(XYZ, ABC, PQR);

};

void maxval(XYZ m, ABC n, PQR r)
{
    /* if (m.x > n.a && m.x > r.p)
        cout << m.x;
    else if (n.a > m.x && n.a > r.p)
        cout << n.a;
    else
        cout << r.p; */

    (m.x > n.a && m.x > r.p) ? cout << m.x : (n.a > m.x && n.a > r.p) ? cout << n.a : cout << r.p;
}

int main()
{
    XYZ xyz;
    ABC abc;
    PQR pqr;
    xyz.setvalue();
    abc.setvalue();
    pqr.setvalue();
    maxval(xyz, abc, pqr);
    return 0;
}
