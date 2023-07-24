#include <iostream>
using namespace std;
class beta;
class alpha
{
private:
    int data;

public:
    alpha()
    {
        data = 3;
    }
    friend int add(alpha a, beta b);
};
class beta
{
private:
    int data;

public:
    beta()
    {
        data = 7;
    }
    friend int add(alpha a, beta b);
};
int add(alpha a, beta b)
{
    return a.data + b.data;
}
int main()
{
    alpha aa;
    beta bb;
    cout << "added value from both classes:" << add(aa, bb) << endl;
    return 0;