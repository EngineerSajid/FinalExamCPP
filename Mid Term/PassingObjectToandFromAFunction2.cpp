//Object Return from add function

#include<iostream>
using namespace std;

class SUM
{
private:
    int value;
public:
    SUM()
    {
        value = 0;
    }
    SUM(int S)
    {
        value = S;
    }
    SUM add(SUM s1)
    {
        SUM s;
        s.value = value + s1.value;
        return s;
    }
    SUM add(SUM s1,SUM s2)
    {
        SUM s3;
        s3.value = value + s1.value + s2.value;
        return s3;
    }
    void show()
    {
        cout<<"Value is: "<<value<<endl;
    }
};
int main()
{
    SUM s1(34);
    SUM s2(12);
    SUM s3(10);
    //s3 = s1+s2;
    s2 = s2.add(s1);
    s2.show();
    s3 = s3.add(s1,s2);
    s3.show();
    return 0;
}

