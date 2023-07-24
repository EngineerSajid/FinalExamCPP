#include <iostream>
using namespace std;

int main()
{
    int intvariable = 5;
    float floatvariable = 34.3;

    int *pointerinteger;
    float *floatpointer;
    void *pointervoid;

    pointerinteger = &intvariable;
    floatpointer = &floatvariable;

    pointervoid = &intvariable;
    pointervoid = &floatvariable;

    cout << pointerinteger << endl;
    cout << floatpointer << endl;

    return 0;
}