#include <iostream>
using namespace std;

class Test
{
private:
    int alpha;

public:
    Test()
    {
        this->alpha = 1;
    }
    Test(int alpha)
    {
        this->alpha = alpha;
    }
    void tester()
    {
        cout << alpha << endl;
    }
};

int main()
{
    Test t;
    t.tester();

    Test t2(30);
    t2.tester();

    return 0;
}