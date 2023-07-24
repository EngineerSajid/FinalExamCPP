#include <iostream>
using namespace std;

int main()
{
    int v1, v2, v3;

    v1 = 10;
    v2 = 11;
    v3 = 12;

    cout << v1 << " " << v2 << " " << v3 << endl;
    cout << &v1 << " " << &v2 << " " << &v3 << endl;

    int *pointer;
    pointer = &v1;

    cout << pointer << endl;
    cout << *pointer << endl;

    return 0;
}