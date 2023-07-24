#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;

public:
    class InchesEx
    {
    };

    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int feet, float inches) : feet(feet), inches(inches)
    {
        if (inches >= 12.0)
        {
            throw InchesEx();
        }
    }

    void getDistance()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inchces: ";
        cin >> inches;

        if (inches >= 12.0)
        {
            throw InchesEx();
        }
    }
    void showDistance()
    {
        cout << feet << " " << inches << endl;
    }
};

int main()
{
    try
    {
        Distance distance1(13, 3.5);
        Distance distance2;
        distance2.getDistance();
        cout << "Distance = ";
        distance1.showDistance();
        cout << "Distance = ";
        distance2.showDistance();
    }
    catch (Distance ::InchesEx)
    {
        cout << "Inches value is too large" << endl;
    }
    return 0;
}