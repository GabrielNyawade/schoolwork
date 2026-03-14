#include <iostream>
using std::cin, std::cout;

struct Point {
    int x, y;
};
struct Rect {
    Point top_left;
    Point bottom_right;
};

/// @brief Checks if rectangle in the first position of the parameter list is inscribed in the second
/// @param R1 struct Rect, supposedly inscribed in R2
/// @param R2 struct Rect, supposedly larger than R1 and contains R1
/// @return true or false
bool isContained(Rect R1, Rect R2);

/// @brief Counts number of vertices of the rectangle in the first position of the parameter list present inside the second
/// @param R1 struct Rect, with vertices supposedly in R2
/// @param R2 struct Rect, supposedly containing vertices of R1
/// @return number of vertices of R1 contained in R2
int verticesContained(Rect R1, Rect R2);

int main()
{
    Rect rec1, rec2;
    cout << "Coordinates for rectangle 1: \n";
    cout << "Top-left vertex: \n";
    cout << "x-coordinate: ";
    cin >> rec1.top_left.x;
    cout << "y-coordinate: ";
    cin >> rec1.top_left.y;
    cout << '\n';
    cout << "Bottom-right vertex: \n";
    cout << "x-coordinate: ";
    cin >> rec1.bottom_right.x;
    cout << "y-coordinate: ";
    cin >> rec1.bottom_right.y;
    cout << '\n';
    cout << "-------------------------------\n\n";

    cout << "Coordinates for rectangle 2: \n";
    cout << "Top-left vertex: \n";
    cout << "x-coordinate: ";
    cin >> rec2.top_left.x;
    cout << "y-coordinate: ";
    cin >> rec2.top_left.y;
    cout << '\n';
    cout << "Bottom-right vertex: \n";
    cout << "x-coordinate: ";
    cin >> rec2.bottom_right.x;
    cout << "y-coordinate: ";
    cin >> rec2.bottom_right.y;
    cout << '\n';
    cout << "-------------------------------\n\n";

    if (isContained(rec1, rec2))
    {
        cout << "Rectangle 1 is contained in Rectangle 2.\n";
    } else if (isContained(rec2, rec1)) {
        cout << "Rectangle 2 is contained in Rectangle 1.\n";
    } else {
        cout << "None of the rectangles contain each other.\n";
    }
    cout << "Number of vertices of Rectangle 1 contained inside Rectangle 2: " << verticesContained(rec1, rec2) << '\n';
    cout << "Number of vertices of Rectangle 2 contained inside Rectangle 1: " << verticesContained(rec2, rec1) << '\n';
    return 0;
}

bool isContained(Rect R1, Rect R2)
{
    if (R1.top_left.x > R2.top_left.x && R1.top_left.y < R2.top_left.y && 
        R1.bottom_right.x < R2.bottom_right.x && R1.bottom_right.y > R2.bottom_right.y) {
            return true;
    }
    return false;
}
int verticesContained(Rect R1, Rect R2)
{
    int vertices = 0;
    if (isContained(R1, R2))
    {
        vertices = 4;
    } else {
        if (R1.top_left.x > R2.top_left.x && R1.top_left.y << R2.top_left.y || 
            R1.bottom_right.x < R2.bottom_right.x && R1.bottom_right.y > R2.bottom_right.y) {
                vertices++;
                if (R1.bottom_right.y > R2.bottom_right.y || R1.top_left.x < R2.top_left.x) vertices++;
        }
    }
    return vertices;
}