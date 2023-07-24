#include <iostream>
using namespace std;
struct person
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    person p1;
   // p1.age=40;
   // p1.salary=60000;
   // cout<<p1.age<<"-------"<<p1.salary<<"\n";


    cout<<"Enter the name of the person"<<"\n";
    cin.get(p1.name,50);
    cout<<"Enter the age of the person"<<"\n";
    cin>>p1.age;
    cout<<"Enter the salary of the person"<<"\n";
    cin>>p1.salary;
    cout<<"Displaying Information"<<"\n";
    cout<<"name:"<<p1.name<<"\n";
     cout<<"age:"<<p1.age<<"\n";
      cout<<"salary:"<<p1.salary<<"\n";
 return 0;

}
