#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal can eat." << endl;
    }
    void sleep()
    {
        cout << "Animal can sleep." << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog can bark." << endl;
    }
};
int main()
{
    Dog d;
    d.eat();
    d.sleep();
    d.bark();

    return 0;
}