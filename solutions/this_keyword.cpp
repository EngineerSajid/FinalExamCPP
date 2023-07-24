#include <iostream>
using namespace std;

class Where
{
private:
    char str[100];

public:
    void display()
    {
        cout << "the objects address is " << this << endl;
    }
};

int main()
{
    Where w1, w2, w3;

    w1.display();
    w2.display();
    w3.display();

    return 0;
}