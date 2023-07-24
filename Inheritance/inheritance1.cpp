#include <iostream>
using namespace std;

class First
{
public:
    int x;

protected:
    int y;

private:
    int z;
};
class Second : public First
{
public:
    int getx()
    {
        x = 0;
        return x;
    }
    // y is protected
    int gety()
    {
        y = 0;
        return y;
    }
    // z is not accessible From Second Class
    // int getz()
    // {
    //     z = 12;
    //     return z;
    // }
};
class Third : protected First
{
    // x is protected
    // y is protected
    // z is not accessible from Third Class
};
class Fourth : private First
{
    // x is private
    // y is private
    // z is not accessible from Fourth Class
};

int main()
{

    Second test;
    cout << test.x << endl;
    // cout << test.y << endl;
    // cout << test.z << endl;

    cout << test.getx() << endl;
    cout << test.gety() << endl;
    cout << test.getx() << endl;

    return 0;
}