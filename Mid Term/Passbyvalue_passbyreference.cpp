#include<iostream>
using namespace std;

class Swap
{
private:
    int a;
    int b;
public:
    void PassbyValue(int aa,int bb)
    {
        a = aa;
        b = bb;
        int temp;
        cout<<"Before swapping value of a is: "<<a<<endl;
        cout<<"Before swapping value of b is: "<<b<<endl;
        temp = a;
        a = b;
        b = temp;
        cout<<"After swapping value of a is: "<<a<<endl;
        cout<<"Before swapping value of b is: "<<b<<endl;
    }
    void PassbyReference(int& aa,int& bb)
    {
        a = aa;
        b = bb;
        int temp;
        cout<<"Before swapping value of a is: "<<a<<endl;
        cout<<"Before swapping value of b is: "<<b<<endl;
        temp = a;
        a = b;
        b = temp;
        cout<<"After swapping value of a is: "<<a<<endl;
        cout<<"Before swapping value of b is: "<<b<<endl;
    }
};

 int main()
{
int x,y;
cout<<"Enter two numbers"<<endl;
cin>>x;
cin>>y;
    Swap s;
    s.PassbyValue(5,6);
    s.PassbyReference(x,y);
    return 0;
}
