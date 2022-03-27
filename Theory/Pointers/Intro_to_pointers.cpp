#include <iostream>

using namespace std;

int main()
{

    int a = 10;

    int *b = &a; // storing address of a inside pointer b

    cout << a << endl;  // 10
    cout << &a << endl; // address  of a
    cout << b << endl;  // address of a
    cout << *b << endl; // dereference operator, hence value of a
    cout << &b << endl; // address of b
    return 0;
}