#include <iostream>

using namespace std;

void magic_increment(int &x) // takes parameter by reference
{
    x = x * 10;
}

int main()
{
    int a = 10;
    int &b = a;

    // Both the values will get affected, since it's looking at the same location inside the memory
    cout << b << endl;
    a = 50;
    cout << b << endl;

    b = 100;
    cout << a << endl;

    // magic increment takes paremeter by reference
    magic_increment(b);
    cout << b << endl;
    return 0;
}