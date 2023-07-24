#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "person constructor" << endl;
    }
    void show();
};

class Faculty : virtual public Person
{
public:
    Faculty()
    {
        cout << "faculty constructor" << endl;
    }
};

class Student : virtual public Person
{
public:
    Student()
    {
        cout << "student constructor" << endl;
    }
};
class TA : public Faculty, public Student
{
public:
    TA()
    {
        cout << "TA constructor" << endl;
    }
};

int main()
{
    TA t;

    return 0;
}