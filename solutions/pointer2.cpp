#include <iostream>
using namespace std;

int main()
{
    int var1 = 13, var2 = 15;

    int *pointer;
    pointer = &var1;
    *pointer = 37;

    var2 = *pointer;

    cout << var1 << endl;
    cout << var2 << endl;

    return 0;
}