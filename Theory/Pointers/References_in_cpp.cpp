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

    // Rules to Remember
    //  1. Decleration and Initialization should be done at the same time.
    //  2. Can't  re-initialize to something else, if it's a ref to a then can't be changed to b (this will end up storing value of B)
    //  3. Must have a valid memory address i.e can't store NULL memory address to it
}