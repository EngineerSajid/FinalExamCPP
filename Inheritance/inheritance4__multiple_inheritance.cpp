#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};
class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is a  four wheeler vehicle" << endl;
    }
};
class Car : public Vehicle, public FourWheeler
{
public:
    Car()
    {
        cout << "This is a car" << endl;
    }
};
int main()
{
    Car c;

    return 0;
}