#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    void getinformation()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << " inches: ";
        cin >> inches;
    }
    void displayInformation()
    {
        cout << "Feet: " << feet << endl;
        cout << " inches: " << inches << endl;
    }
};

int main()
{
    Distance d1;
    d1.getinformation();
    d1.displayInformation();

    Distance *distanceWithPointer;
    distanceWithPointer = new Distance;

    distanceWithPointer->getinformation();
    distanceWithPointer->displayInformation();

    delete distanceWithPointer;

    return 0;
}