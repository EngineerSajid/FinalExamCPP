#include <iostream>
using namespace std;

class operation {
    int a, b, c, add;
    public:
    void get();
    void sum();
    void sum(int x, int y,int z);
    };
    inline void operation ::get()
{
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
    cout << "Enter third value:";
    cin >> c;
}
    inline void operation ::sum()
{
    add = a + b + c;
    cout << "Addition of three numbers: " << a + b + c << endl;
}
  inline void operation ::sum(int x, int y,int z)
{
    a = x;
    b = y;
    c = z;
    add = a + b + c;
    cout << "Addition of three numbers: " << a + b + c << endl;
}


int main()
{
    cout << "Program using inline function\n";
    operation s;
    s.get();
    s.sum();
    s.sum(2,3,4);
    return 0;
}
