#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    cout << "int details" << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(p) << endl;

    char ch = 'v';
    char *p2 = &ch;

    cout << "char details" << endl;
    cout << sizeof(ch) << endl;
    cout << sizeof(p2) << endl;

    return 0;
}