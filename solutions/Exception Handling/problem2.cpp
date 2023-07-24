#include <iostream>
using namespace std;

int main()
{
    int x = 2;

    cout << "Before try" << endl;
    try
    {
        cout << "Inside the try" << endl;

        if (x < 0)
        {
            throw x;
            cout << "After throw (Never executed)" << endl;
        }
    }
    catch (int x)
    {
        cout << "Exception Caught" << endl;
    }
    cout << "After catch (will be executed)" << endl;
    return 0;
}