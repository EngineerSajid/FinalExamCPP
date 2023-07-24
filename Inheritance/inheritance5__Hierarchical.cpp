#include <iostream>
using namespace std;

class Shape
{
protected:
    int x, y;

public:
    void getInformation(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

class Rectangle : public Shape
{
public:
    int RectangleArea()
    {
        int area = x * y;
        return area;
    }
};

class Triangle : public Shape
{
public:
    float TriangleArea()
    {
        float area = 0.5 * x * y;
        return area;
    }
};

class Square : public Shape
{
public:
    int SquareArea()
    {
        int area = x * x; // Corrected the formula for the square's area
        return area;
    }
};

int main()
{
    Rectangle r;
    Triangle t;
    Square s;
    int length, breadth, base, height, side;

    cout << "Enter the length and breadth of a rectangle: ";
    cin >> length >> breadth;

    r.getInformation(length, breadth);
    cout << "Area of the rectangle = " << r.RectangleArea() << endl;

    cout << "Enter the base and height of a triangle: ";
    cin >> base >> height;

    t.getInformation(base, height);
    cout << "Area of the triangle = " << t.TriangleArea() << endl;

    cout << "Enter the length of one side of the square: ";
    cin >> side;

    s.getInformation(side, side);
    cout << "Area of the Square = " << s.SquareArea() << endl;

    return 0;
}
