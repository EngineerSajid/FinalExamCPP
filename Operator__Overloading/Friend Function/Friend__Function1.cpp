#include <iostream>
using namespace std;
class A
{
private:
    int a;

public:
    A()
    {
        a = 0;
    }
    void getdata();
    friend void show(A x)
    {

        cout << "a is:" << x.a << endl;
    }
};
void A ::getdata()
{
    cout << "Enter value of a:" << endl;
    cin >> a;
}
/*void show(A x)
{
    cout<<"a is:"<<x.a<<endl;
}*/
int main()
{
    A a, b;
    a.getdata();
    show(a);
    show(b);
    return 0;
}
