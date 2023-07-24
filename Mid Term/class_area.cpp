#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length = 5;
    int height = 4;
public:
    void area()
    {
        cout<<"area: "<<length*height<<endl;
    }
};
int main()
{
    Rectangle r1;
    //r1.length = 5;
    //r1.height = 4;
    r1.area();
    return 0;
}
