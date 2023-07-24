#include <iostream>
using namespace std;
#define MIN 0
class Divide
{
private:
    int n1, n2;

public:
    class zero
    {
    };

    Divide()
    {
        n1 = 4;
        n2 = 1;
    }
    Divide(int n1, int n2) : n1(n1), n2(n2)
    {
        if (n2 == MIN)
        {
            throw zero();
        }
    }
    void getinformation()
    {
        cout << "Enter the first Number : ";
        cin >> n1;
        cout << "Enter the second Number : ";
        cin >> n2;
        if (n2 == MIN)
        {
            throw zero();
        }
    }
    double displayInformation()
    {
        cout << "Number1: " << n1 << endl;
        cout << "Number2: " << n2 << endl;

        double result = (double)n1 / (double)n2;
        return result;
    }
};

int main()
{
    try
    {
        Divide d1(13, 5);
        // d1.getinformation();
        // d1.displayInformation();

        Divide d2;
        d2.getinformation();
        cout << d1.displayInformation() << endl;
        cout << d2.displayInformation() << endl;
    }
    catch (Divide ::zero)
    {
        cout << "Divide by zero is not possible" << endl;
    }

    return 0;
}