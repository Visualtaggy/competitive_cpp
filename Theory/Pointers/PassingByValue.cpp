#include <iostream>
using namespace std;

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "values inside function: " << a << " " << b << endl;
}

void swapByRef(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "values inside function: " << *a << " " << *b << endl;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "values inside function: " << *a << " " << *b << endl;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "Swap by values" << endl;
    swapByValue(a, b); // here the values are not swapped as it creates a copy of a and b which gets destroyed once the function is wiped from the stack.
    cout << "values: " << a << " " << b << endl;

    cout << "=================================================================" << endl;
    cout << "Swap by Referance" << endl;
    swapByRef(&a, &b);
    cout << "values: " << a << " " << b << endl;

    cout << "=================================================================" << endl;
    cout << "Swap by Referance though variables" << endl;
    int *r1 = &a;
    int *r2 = &b;
    swap(r1, r2);
    cout << "values:" << a << " " << b << endl;

    return 0;
}