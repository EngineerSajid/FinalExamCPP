#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char str[35] = "Idle hands are the deil's workshop";
    int len = strlen(str);

    char *ptr;
    ptr = new char[len];
    strcpy(ptr, str);
    cout << " Pointer is :" << ptr << endl;

    delete[] ptr;
}
