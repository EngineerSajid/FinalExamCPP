#include <iostream>
using namespace std;
#define PI 3.1416

//abstract class
class Shape
{
public:
    virtual double area() const = 0;        // pure virtual function
    virtual double perimeter() const = 0;   // pure virtual function
    virtual ~Shape() {}                     // virtual destructor 
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override
    {
        return (length * width);
    }
    double perimeter() const override
    {
        return 2 * (length + width);
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() const override
    {
        return PI * radius * radius;
    }
    double perimeter() const override
    {
        return 2 * PI * radius;
    }
};
int main()
{
    double length, width, radius;

    cout << "Enter the dimension of rectangle (length and width)";
    cin >> length, width;

    Rectangle rec(length, width);
    cout << "Rectangle Area : " << rec.area() << endl;
    cout << "Rectangle Perimeter : " << rec.perimeter() << endl;

    cout << "Enter the radius of a circle : ";
    cin >> radius;

    Circle cir(radius);
    cout << "Circle Area : " << cir.area() << endl;
    cout << "Circle Perimeter : " << cir.perimeter() << endl;

    return 0;
}